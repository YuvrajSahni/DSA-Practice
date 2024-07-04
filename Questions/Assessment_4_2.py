x=4
database = ["Croaks", "Eat Flies", "Shrimps", "Sings"]
knowbase = ["Frog", "Canary", "Green", "Yellow"]

def display():
    print("\n1.Croaks \n2.Eat Flies \n3.shrimps \n4.Sings ")

def main():
    print("*-----Forward--Chaining-----*")
    display()
    n = int(input("\nSelect One: "))
    
    if n == 1 or n == 2:
        print("Can be a Frog")
    elif n == 3 or n == 4:
        print("Can be a Canary")
    else:
        print("\nInvalid Option")
    
    if n >= 1 and n <= 4:
        print("\nYour choice is, it",database[n-1])
        print("\nColor can be \n1.Green \n2.Yellow")
        k = int(input("\nSelect Option: "))
        
        if k == 1 and (n == 1 or n == 2): # frog0 and green1
            print("Yes, it is a",knowbase[0],"and its color is",knowbase[2])
            
        elif k == 2 and (n == 3 or n == 4): # canary1 and yellow3
            print("Yes, it is a",knowbase[1],"and its color is",knowbase[3])

        else:
            print("\nInvalid knowledge database")

if __name__ == "__main__":
    main()
    print("\nYuvraj Sahni-21BIT0070")
