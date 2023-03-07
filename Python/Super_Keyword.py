class Employee:
    companyName = "Google" #Class Variable
    def __init__(self, name, income):
        self.name = name #Instance variable
        self.income = income
    def Parent_Method(self):
        print("This is parent method")
        
class Programmer(Employee):
    def __init__(self, name, income, lang):
        super().__init__(name, income)
        self.lang = lang
    def printDetails(self):
        print(f"The employee name is {self.name} and income is {self.income}and he is working in {self.lang}")
        
    def Parent_Method(self):
        print("This is child method") #1st it will run this
        super().Parent_Method() #after that it will go the parent_method and run it
        
a = Employee("Zander", 120000)
b = Programmer("Adi", 154000, "Python")
c = Programmer("Swagat", 220000, "Java")
b.printDetails()
c.printDetails()
c.Parent_Method()