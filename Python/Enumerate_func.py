marks = [20, 30, 40, 10, 90, 86, 43]
#Enumerate function makes the code short by helping you store index of list simulatenously while parsing the value of list

for index, mark in enumerate(marks):
    print(mark)
    if(index == 4):
        print("Zander Op")
#No need to manually increment the value of index but it is mandatory to use inde 1st & value later
for index, mark in enumerate(marks, start=1): #If we need to start the indexing from a custom value instead of 0
    print(mark)
    if(index == 4):
        print("Zander Op")