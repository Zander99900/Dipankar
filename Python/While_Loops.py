#Do-while loops do not exist in python, in order to do that, we use break & continue statements to emulate do while loop
i = 0
# while True:
#     i = int(input("Enter the number: "))
#     print(i)
#     i = i + 1
#     if(i == 10):
#         break
#At first the code will run irrespective of value of i
while (i<14):
    print(i)
    i = i + 1
    if(i == 10):
        print("This will skip the iteration")
        continue