import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)

    counts = {}
    for row in reader:
        favoriteLanguage = row["language"]
        
        if favoriteLanguage in counts:
            counts[favoriteLanguage] += 1
        else:
            counts[favoriteLanguage] = 1

favorite = input("Favorite: ")
if favorite in counts:
    print(f"{favorite}: {counts[favorite]}")