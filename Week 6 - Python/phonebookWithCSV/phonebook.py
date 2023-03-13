import csv

file = open("phonebook.csv", "a")

name = input("Write the name: ")
number = input("Write the number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()