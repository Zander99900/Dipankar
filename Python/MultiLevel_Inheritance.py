#This is the level of inheritance where the properties of one class in another class and the 2nd class is inherited in 3rd class

class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species
        
    def make_sound(self):
        print("This is a sound made by an animal")

    def show_details(self):
        print(f"Name: {self.name}")
        print(f"Species: {self.species}")
        
class Cat(Animal):
    def __init__(self, name, breed):
        Animal.__init__(self, name, species="cat")
        self.breed = breed
        
    def make_sound(self):
       print("Meow")
       
    def show_details(self):
        Animal.show_details(self)
        print(f"Breed: {self.breed}")
        
class Maine_Coon(Cat):
    def __init__(self, name, color):
        Cat.__init__(self, name, breed="Maine Coon")
        self.color = color
        
    def show_details(self):
        Cat.show_details(self)
        print(f"Color : {self.color}")
    

a = Maine_Coon("Tom", "Black")
a.show_details()