#dunder methods are spcl methods which are not directly called

class Employee:
    def __init__(self, name):
        self.name = name #Instance variable
        self.income = 10000
    def __str__(self):
        return "This is __str__ method"
    
    def __repr__(self):
        return "This is __repr__ method" #This method works if the object can't find str method
    
    def __call__(self):
        print("This is call function, It is used to write all the details that the object can do")

    def __len__(self):
        i = 0
        for a in self.name:
            i = i + 1
        return i
    
a = Employee("Zander")
print(len(a))# type: ignore
print(a) #Here the str func gets called automatically without manually typing
a() #use of call function