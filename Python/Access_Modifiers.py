#There is no concept of public private & protected in python but for convenience purposes we use __ before the variable name if we want to declare it as private and by default all are public and use _ to do it as protected variable

class Employee:
    def __init__(self, name, id):
        self.__name = name #private using name mangling
        self._id = id #protected variable
    def printDetails(self):
        print(f"The employee id is {self._id} and name is {self.__name}")
        
a = Employee("Zander", 10)
# print(a.__name) #This is a private access modifier which gives error if called directly outside class
print(a._Employee__name) # type: ignore showing error when written so this comment ignores that
print(a._id)
print(a.__dir__()) #this shows all the methods that can be used in the variable