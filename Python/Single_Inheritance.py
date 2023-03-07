#This is the most common level of inheritance as we do it generally by inheriting the properties of one class in another class

class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species
        
    def make_sound(self):
        print("This is a sound made by an animal")
        
class Cat(Animal):
    def __init__(self, name, breed):
        Animal.__init__(self, name, species="cat")
        self.breed = breed
        
    def make_sound(self):
       print("Meow")
       
    def claws(self):
        print("Claws Out")
       
c = Cat("bilei", "Maine Coon")
c.make_sound()
c.claws()