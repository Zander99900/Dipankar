class MyCustomClass:
    def __init__(self, value):
        self._value = value
        
    def show(self):
        print(f"Value is {self._value}")
        
    @property #This decorator is used to get the value of a function
    def ten_value(self):
        return 10*self._value
    
    @ten_value.setter #This decorator is used to change the value of a function
    def ten_value(self, new_value):
        self._value = new_value/10
        
myObj = MyCustomClass(10)
myObj.show()
print(myObj.ten_value)
myObj.ten_value = 45 #Changing the value using setter, we cannot do it directly in same object
print(myObj.ten_value)
