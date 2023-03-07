class Person:
    name = "Zander"
    occupation = "Student"
    income = 18000
    
    def info(self):
        print(f"{self.name} works as a {self.occupation} and he earns ₹{self.income}")

a = Person()
a.info() #Prints the default tet declared in the class

a.name = "Dipankar"
a.occupation = "Movie guide"
a.income = 20000

a.info() #prints the updated object
Person.info(a) #The above function is internally converted into this type so it is necessary to mention self keyword