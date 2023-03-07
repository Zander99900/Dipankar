#Instance variables are used when we need to modify some variables for objects that will not affect the variable already declared in class but if we modify class variable then that will do permanent changes in class 
class Employee:
    companyName = "Google" #Class Variable
    def __init__(self, name):
        self.name = name #Instance variable
        self.income = 1000 
        
    def info(self):
        print(f"{self.name} works as a {self.companyName} and he earns ₹{self.income}")
        
a = Employee("Zander")
a.income =20000 #Here we can change for objects but will not affect the class
a.info()
Employee.companyName = "Microsoft" #This will do permanent changes in class

b = Employee("Aditya")
b.income = 30000
b.info() #Here we did not change the company name separately but still we get microsoft as output so be careful while using class variables 