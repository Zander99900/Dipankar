x = int(input("Enter the value of x: "))
# x is the variable to match
#this is a modified switch case which is used in python 3.10 onwards
match x:
    # if x is 0
    case 0:
        print("x is zero")
    # case with if-condition
    case 4:
        print("case is 4")

    case _ if x!=90:
        print(x, "is not 90")
    case _ if x!=80:
        print(x, "is not 80")
    case _:
        print(x)
        
