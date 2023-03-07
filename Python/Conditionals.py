age = int(input("Enter Your age: "))
print("Your age is:",age)
if(age>= 18):
    print("You can drive")
else:
    print("You cannot drive")
print("This line is out of block, This will print irrespective of condition")
#nested loop
num = int(input("Enter your Number: "))
if(num < 0):
    print("Negative number")
elif(num > 0):
    if(num<= 10):
        print("Number is between 0 to 10")
    elif(num > 10 and num <=20):
        print("Number is between 11-20")
    else:
        print("Number is positive")
else:
    print("Number is zero")