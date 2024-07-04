database = ["Eat Flies", "Shrimps"]
knowbase = ["Frog", "Canary"]
color = ["Green", "Yellow"]

def display():
    print("\n1.Frog \n2.Canary ")
    
def main():
    print("*-----Backward--Chaining-----*")
    display()
    x = int(input("\nSelect One: "))

    if x == 1:
        print("Chance Of eating flies")
    elif x == 2:
        print("Chance of shrimping")
    else:
        print("\nInvalid Option")
    
    if x >= 1 and x <= 2:
        print("\nYour choice is",knowbase[x-1])
        print("\nColor can be\n1.green \n2.yellow")
        k = int(input("\nSelect Option: "))
        
        if k == 1 and x == 1: # frog0 and green1
            print("Yes it is in",color[0],"colour and it will",database[0])
            
        elif k == 2 and x == 2: # canary1 and yellow3
            print("Yes it is in",color[1],"colour and it will",database[1])
            
        else:
            print("\nInvalid knowledge database")
        
if __name__ == "__main__":
    main()
    print("\nYuvraj Sahni-21BIT0070")
