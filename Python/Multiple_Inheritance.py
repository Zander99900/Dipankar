class Employee:
    def __init__(self, name):
        self.name = name
        
    def __str__(self):
        return self.name

class Dancer:
    def __init__(self, dance):
        self.dance = dance
        
    def __str__(self):
        return self.dance
    
class DancerEmployee(Employee, Dancer):
    def __init__(self, name, dance):
        self.name = name
        self.dance = dance
    
e = Employee("Zander")
print(e)

e2 = DancerEmployee("Zander", "Break-Dance")
print(e2) #Here only the value passed in the 1st position prints

#To help know the order of methods we use mro function
print(DancerEmployee.mro())