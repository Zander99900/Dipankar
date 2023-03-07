myList = [2,5,8,4]
print(myList)
myList.append(6) #Adds the element at the end of list 
print(myList)
myList.sort()
print(myList)
# myList.reverse()
print(myList)
print(myList.index(8)) #returns the index of element provided
print(myList.count(5)) #counts how many times the element is present in list
# newList = myList #Doing this changes the original list so it is not recommended in python
newList = myList.copy() #This is how we copy the elements from one list to another and how we modify the new list
newList[0] = 0 
print(myList)
myList.insert(1, 34) #The first field is for index and second the value we want to insert
print(myList)
k = [54,87,98]
listB = k + myList # merge two lists and create a new list
print(listB)
myList.extend(k)
print(myList) #Here we change the original list, if we do not want to modify the original list then use the above method