import sys

names = ["Hector", "Michel", "Oscar", "Andy", "Max", "Santi"]

name = input("Write a name: ")

if name in names:
    print("Found!")
    sys.exit(0)

print("Not found!")
sys.exit(1)