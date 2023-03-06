words = set() # A list that doesn't have repeated elements

# A function called check that checks if a eword is in the set
def check(word):
    # Checks if a word is in the set "words"
    if word.lower() in words: # ".lower()" puts the word in lowercase
        return True
    else:
        return False

# A function called loads word from a file to the set
def load(dictionary):
    file = open(dictionary, "r") # Opening a file in read configuration
    for line in file: # for each line in file, adds a word to the set "words"
        word = line.rstrip() # Gets rid of end line
        words.add(word) # Adding the word to the set
    file.close() # Closes the file
    return True

# A function called size that returns the length of a list
def size():
    return len(words)

# A function called unload that frees and clears any memory that we used
# Spoiler: The language does it alone
def unload():
    return True