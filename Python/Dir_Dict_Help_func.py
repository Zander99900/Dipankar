x = [1,2,3]
print(dir(x)) #it shows what are the methods defined in function

class Employee:
    companyName = "Google" #Class Variable
    def __init__(self, name):
        self.name = name #Instance variable
        self.income = 1000 

y = Employee("Zander")
print(y.__dict__) #used to get values in classes

print(help(Employee)) #used for documentation of any class object anything