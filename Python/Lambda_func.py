# def double(x):
#     return x*2
#it is used for simple mini-functions
double = lambda x: x*2
print(double(5))

avg = lambda x,y: (x+y)/2
print(avg(10,20))

#we can also pass func as an argument using lambda func:
def custom(fx, val):
    return 10 + fx(val)

cube = lambda x:x*x*x

print(custom(cube, 3))