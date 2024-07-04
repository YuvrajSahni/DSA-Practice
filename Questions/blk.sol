// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract Payroll {
    address public employer;
    uint256 public payDuration = 30 days; // Pay duration in seconds (e.g., 30 days)

    struct Employee {
        address payable wallet;
        uint256 salary;
        uint256 lastPayTime;
    }

    mapping(address => Employee) public employees;
    address[] public employeeAddresses;

    event EmployeeAdded(address indexed employee, uint256 salary);
    event EmployeePaid(address indexed employee, uint256 amount);
    event SalaryUpdated(address indexed employee, uint256 newSalary);
    event FundsDeposited(address indexed employer, uint256 amount);

    modifier onlyEmployer() {
        require(msg.sender == employer, "Only the employer can perform this action");
        _;
    }

    modifier onlyEmployee() {
        require(employees[msg.sender].wallet == msg.sender, "Only an employee can perform this action");
        _;
    }

    constructor() {
        employer = msg.sender;
    }

    function addEmployee(address payable _employee, uint256 _salary) external onlyEmployer {
        require(employees[_employee].wallet == address(0), "Employee already exists");

        employees[_employee] = Employee({
            wallet: _employee,
            salary: _salary,
            lastPayTime: block.timestamp
        });

        employeeAddresses.push(_employee);

        emit EmployeeAdded(_employee, _salary);
    }

    function updateSalary(address _employee, uint256 _newSalary) external onlyEmployer {
        require(employees[_employee].wallet != address(0), "Employee does not exist");

        employees[_employee].salary = _newSalary;

        emit SalaryUpdated(_employee, _newSalary);
    }

    function depositFunds() external payable onlyEmployer {
        require(msg.value > 0, "Must deposit a positive amount");
        emit FundsDeposited(msg.sender, msg.value);
    }

    function requestPayment() external onlyEmployee {
        Employee storage employee = employees[msg.sender];
        require(block.timestamp >= employee.lastPayTime + payDuration, "Pay duration not yet reached");

        uint256 amount = employee.salary;
        require(address(this).balance >= amount, "Insufficient contract balance");

        employee.lastPayTime = block.timestamp;
        employee.wallet.transfer(amount);

        emit EmployeePaid(msg.sender, amount);
    }

    function getEmployeeInfo(address _employee) external view returns (address, uint256, uint256) {
        Employee memory employee = employees[_employee];
        return (employee.wallet, employee.salary, employee.lastPayTime);
    }

    function getBalance() external view returns (uint256) {
        return address(this).balance;
    }

    function getEmployeeCount() external view returns (uint256) {
        return employeeAddresses.length;
    }
}
