people = {
    "Hector": "11-22-33-44-55",
    "Michel": "66-77-88-99-00",
    "Oscar": "12-34-56-78-90",
    "Andy": "09-87-65-34-21",
    "Max": "54-12-36-98-70",
    "Santi": "07-89-63-21-45"
}

name = input("Input a name: ")
if name in people:
    print(f"Number: {people[name]}")