#constructor is used to create just an template without entering any default values as in nrml classes

class Person:
    def __init__(self, name, occ, income):
        self.name = name
        self.occ = occ
        self.income = income
        
    def info(self):
        print(f"{self.name} works as a {self.occ} and he earns ₹{self.income}")
#self is the object created that is passed automatically but we need to pass other arguments

a = Person("Zander","SDE", 20000)
a.info()
b = Person("Jantu","Geology Tchr", 50000)
b.info()
c = Person("Adi","SAP Dev", 30000)
c.info()
d = Person("Prem","Farmer", 100000)
d.info()
#this method makes the code organized and we will get the error if we enter some invalid values or pass more or less arguments defined in class