# a = input("Enter a number: ")
# print(f"Multiplication table of {a} is:")
# try:
#     for i in range(1, 11):
#         print(f"{int(a)} x {i} = {int(a) * i}")
# #value error handled
# except ValueError:
#     print("Invalid input!!")

def func1():
    b = [5,7] #we can only access 0 & 1 index but if we try to access any index>2 then we get error
    x = int(input("Enter the index of list b you want to access: "))
    try:
        print(b[x])
        return 1
    except:
        print("Invalid index entered!")
        return 0
    #this part is out of loop and always executed even if u return value
    finally:
        print("Program over, I am always executed")
    #this code cannot be used in output
        # print("Program over, I am always executed")
        
# w = func1()
# print(w)

#Custom Errors
a = (input("Enter a number betn 5 and 9 or enter quit: "))
if a == "quit" or int(a) > 5 or int(a) < 9:
    print(a)
else:
    raise ValueError("Value not in required limit!!")
