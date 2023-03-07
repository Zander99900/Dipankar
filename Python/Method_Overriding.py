#here we can change any child class and it will be according to the func pre-defined in parent class
class Shape:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
    def area(self):
        return (self.x * self.y)
    
class Circle(Shape):
    def __init__(self, radius):
        super().__init__(radius, radius)
        
    def area(self):
        return 3.14*super().area()
    
sq = Shape(3,5)
print(f"The area of the square is: {sq.area()}")
cr = Circle(5)
print(f"The surface area of the circle is: {cr.area()}")
