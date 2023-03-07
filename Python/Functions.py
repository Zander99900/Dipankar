def calcGMean(a, b):
    mean = (a*b)/(a+b)
    print(mean)
    
def isGreater(a= 5, b=3):
    if(a>b):
        print("First Number is Greater")
    else:
        print("Second Number is Greater")

def islesser(a, b= 8):
    pass
#Leaving this func if i decide to write the func later and currently just implement it

a = 5
b = 8
calcGMean(a, b)

islesser(a= 5) #Required argument as a is undefined in func

isGreater(b = 24) #This will modify the value of b

isGreater(b = 1, a = 10) #Keyword argument: This will change the order in which arguments are defined in func

def avg(a = 3, b = 5):
    print("Average of a & b is: ", (a+b)/2)
    
avg() #This will use a = 3 & b = 5 as default argument
avg(7, 9)   #This will use a = 7 & b = 9 as new argument and ignore the default 

def avg2(*num): # "*" is used for tuple, "**" is used for dictionary
#this will store the values as tuple
    sum = 0
    for i in num:
        sum = sum + i
        return sum/len(num)
    
c = avg2(7, 3, 5, 8, 4)
print("The Average is: ",c)