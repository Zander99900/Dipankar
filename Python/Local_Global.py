x = 10 #Global Variable
def func():
    global x #This keyword has the power to change the global value of a variable from within the func but it is not recommended to avoid confusion
    x = 2
    y = 3 #Local Variable
    print(f"the local value of y is {y}")
    
func()
print(f"the global value of x is {x}")
# print(y) gives error as y is a local veriable