#This method is used when u directly want to call the function without using self keyword and it is useful in case of complicated  functions which we want the users to use within the class
class Math:
    def __init__(self, num):
        self.num = num
        
    def addNum(self, num2):
        self.new_Num = num2
    
    @staticmethod
    def add(num, num2):
        return num + num2
    
a = Math(6)
print(a.num)
print(a.add(a.num, 8))
#This is just a simple representation but it is implemented in comple functions