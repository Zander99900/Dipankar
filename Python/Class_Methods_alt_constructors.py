class Employee:
    def __init__(self, name, income):
        self.name = name #Instance variable
        self.income = income 
        
    def info(self):
        print(f"{self.name} earns ₹{self.income}")
        
#this type of functions makes code cleaner and we can use them whenever the situation changes such as fromunderscore fromSpace etc
    @classmethod
    def fromHipen(cls, string):
        return cls(string.split("-")[0], int(string.split("-")[1])) #this will break the string in form of list with each index separated whenever "-" appears and the 2nd part of string is typecasted to int because it will be important if we will do operations with that value
            
a = Employee("Zander", 10000)
a.info()

#if instead of entering the variables name & income, someone gives data in form of string such as:
string = "Zander-10000" #then we can use class methods as alternative constructor
b = Employee.fromHipen(string)
b.info()