x = 4  
database = ["frog", "green", "canary", "yellow"]  
knowbase = ["frog0", "green1", "canary1", "yellow3"]  

print("*-----Forward--Chaining-----*")
print("This program will demonstrate forward chaining algorithm.")
print("Enter 1 or 2 for information about frog0 and green1.")
print("Enter 3 or 4 for information about canary1 and yellow3.")

user_input = int(input("Enter your choice (1-4): "))

if user_input == 1:
    print("Information about frog0: ", database[0], knowbase[0])
    print("Information about green1: ", database[1], knowbase[1])
elif user_input == 2:
    print("Information about frog0: ", database[0], knowbase[0])
    print("Information about green1: ", database[1], knowbase[1])
elif user_input == 3:
    print("Information about canary1: ", database[2], knowbase[2])
    print("Information about yellow3: ", database[3], knowbase[3])
elif user_input == 4:
    print("Information about canary1: ", database[2], knowbase[2])
    print("Information about yellow3: ", database[3], knowbase[3])
else:
    print("Invalid knowledge database.")

print("\nNupur Shah - 21BIT0489")