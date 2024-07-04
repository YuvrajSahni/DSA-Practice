from termcolor import colored 

def display():
    print("X is 1. frog 2. canary")

def select_option():
    print("Select one of the following options:")
    print("1. Chance of eating flies")
    print("2. Chance of shrimping")

def backward_chaining():
    display()
    select_option()

    x = int(input("Enter your choice (1 or 2): "))
    
    if x == 1:
        print(colored("Chance of eating flies", "green"))  
    elif x == 2:
        print(colored("Chance of shrimping", "yellow"))  
    else:
        print("Invalid choice! Please enter either 1 or 2.")

backward_chaining()  

print("\nYuvraj Sahni- 21BIT0070")