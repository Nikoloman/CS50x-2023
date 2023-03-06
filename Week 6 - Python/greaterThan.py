x = int(input("Write the first number: "))
y = int(input("Write the second number: "))

if x > y:
    print(f"{x} is greater than {y}")
elif x < y:
    print(f"{x} is not greater than {y}")
else:
    print(f"{x} is equal to {y}")