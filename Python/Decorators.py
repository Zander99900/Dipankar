#This is a way where we can decorate a function using some custom templates to make them look good

def greet(fx):
    def mfx(*args, **kwargs):
        print("We are now entering the function")
        fx(*args, **kwargs)
        print("The program has ended, thanks for using it")
    return mfx

@greet #This is how we implement the decorator function
def sum(a, b):
    print(a+b)

sum(5, 4)