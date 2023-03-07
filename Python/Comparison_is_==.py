#is operator compares exact location of object in memory whereas == operator simply compares value
a = 4
b = "4"
print(a==b)
print(a is b) #here both will be false as neither the value is same nor the datatype
c = 5
d = 5
print(c==d)
print(c is d) #here they use shared memory
# with case of lists as they are mutable so they initialize different memory for same data
e = [1, 4, 8]
f = [1, 4, 8]
print(e==f)
print(e is f)
#tuple is immutable so they use same memory for same values same in case of integers
g = (1, 4, 8)
h = (1, 4, 8)
print(g==h)
print(g is h)