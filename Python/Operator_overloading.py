#We can overload operators such as +,-,*,/ etc using dunder func:
class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k
        
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    
    def __add__(self, x):
        return Vector(self.i +x.i, self.j + x.j, self.k + x.k) #we need to maintain the datatype of variable so we initialize vector() bcoz by default it will return as string
    
v1 = Vector(4, 5, 7)
v2 = Vector(5, 1, 3)

print(v1 + v2)
print(type(v1 + v2))