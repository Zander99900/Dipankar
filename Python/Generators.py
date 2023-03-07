#generators is a spcl type of function which does not store the value but instead stores the information through which the value can be generated on the fly
def my_generator():
    for i in range(1000000):
        yield i 
        
g = my_generator()

print(next(g))
print(next(g))
print(next(g)) #it generates the value when it is called

# for j in g:
#     print(j) #the way to print all the values of generator function, it saves memory and comes handy in complex computations