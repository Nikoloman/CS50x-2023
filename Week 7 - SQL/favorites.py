import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    scratch = 0
    c = 0
    python = 0

    for row in reader:
        favoriteLanguage = row["language"]
        
        if favoriteLanguage == "Scratch":
            scratch += 1
        elif favoriteLanguage == "C":
            c += 1
        elif favoriteLanguage == "Python":
            python += 1

print(f"Scratch: {scratch}")
print(f"C: {c}")
print(f"Python: {python}")