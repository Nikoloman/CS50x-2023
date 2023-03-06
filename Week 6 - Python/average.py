scores = [] # Empty list

scoreLength = int(input("How many scores do you want to input? "))

for i in range(scoreLength):
    score = int(input(f"Score #{i + 1}: "))
    scores.append(score) # Adds values to the list

# The sum of all the values of the list divided by the number of elements in the list
average = sum(scores) / scoreLength 
print(f"Average score: {average:.2f}")