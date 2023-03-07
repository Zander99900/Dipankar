#Map is an easy way to perform operations in a list/ any iterable object in a smooth way
l1 = [10, 50 ,40 ,60 ,80]

l2 = (list(map(lambda x : x/10, l1))) #Remember to typecast the map to required datatype as by default it returns map object for convenience
print(l2)

#Filter is an easy way to filter the list and perform operations accordingly
l3 = list(filter(lambda x: x%2==0, l2))
print(l3)

#Reduce: we need to import this function as follows
from functools import reduce
#with reduce func we try to reduce the elements of the list into a final value ex: we do sum of all values of l1:

sum = reduce(lambda x,y: x+y, l1)                
print(f"The sum of all the elements in list1 is: {sum}")