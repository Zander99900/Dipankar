#Tuples are almost similar to list with the exception that they are immuatable and u cannot create a tuple with just one element, it is necessary that we leave the tuple with a ","
tuple = (4, 2, 6, 3, 2, 5, 1, 9, 2)
print(type(tuple), tuple)
if 2 in tuple:
    print("Yes 2 is present")
else:
    print("Not present")
    
tup2 = tuple[1:2] #We can do slicing but we need to create another tuple to store the value
print(tup2)
print(tuple[-1]) #it means the same as value of len(tuple) - 1 
#We can do changes in tuple once we convert it into a list and again store the values in other tuple
res = tuple.count(2)
print(res)

res = tuple.index(2, 3, 9)
print(res)
