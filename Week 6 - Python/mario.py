def main():
    height = get_height()
    for i in range(height):
        print("#")

    length = get_length()
    print("[?]" * length) # Prints x times in one line


def get_height():
    # Do-while in Python
    while True:
        # Tries a section of code, if it fails, gives error without ending the execution
        try:
            n = int(input("Height: "))
            if n > 0:
                return n
        except ValueError:
            print("The input is not an integer")


def get_length():
    # Do-while in Python
    while True:
        # Tries a section of code, if it fails, gives error without ending the execution
        try:
            n = int(input("Length: "))
            if n > 0:
                return n
        except ValueError:
            print("The input is not an integer")


main()