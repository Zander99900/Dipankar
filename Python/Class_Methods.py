class Employee:
    companyName = "Google" #Class Variable
    def __init__(self, name):
        self.name = name #Instance variable
        self.income = 1000 
        
    def info(self):
        print(f"{self.name} works as a {self.companyName} and he earns ₹{self.income}")
        
    @classmethod
    def compName(cls, val):
        cls.companyName = val #this will take input cls as a whole class and not an instance of class and will change the class variables
        
a = Employee("Zander")
a.income =20000 #Here we can change for objects but will not affect the class
a.info()
a.compName("Microsoft")

b = Employee("Aditya")
b.income = 30000
b.info()

print(b.companyName)