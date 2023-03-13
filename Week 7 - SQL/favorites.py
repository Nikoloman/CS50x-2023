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

for favorites in sorted(counts, key=lambda language: counts[language], reverse=True):
    print(f"{favorites}: {counts[favorites]}")