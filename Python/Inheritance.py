class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id
    def printDetails(self):
        print(f"The employee id is {self.id} and name is {self.name}")

#this kind of class inherits the properties of the class mentioned under ()
class Coder(Employee):
    def printLang(self):
        print("This user is working in python")
 
e = Coder("Zander", 10)
e.printDetails()
e.printLang()

