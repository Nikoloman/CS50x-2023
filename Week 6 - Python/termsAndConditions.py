option = input("Do you accept terms and conditions? [Y, N]: ")

# In python, for logical condition we use the literal words "or", "and", "not"
if option == "Y" or option == "y":
    print("Ok, we good then, you can enter")
elif option == "N" or option == "n":
    print("You shall not pass")
else:
    print("Invalid option")

# The same but with using a list of options
option = input("Do you accept terms and conditions? [Y, N]: ")
if option in ["Y", "y", "yes", "Yes", "yeah"]:
    print("Ok, we good then, you can enter")
elif option in ["N", "n", "no", "No", "nah"]:
    print("You shall not pass")
else:
    print("Invalid option")