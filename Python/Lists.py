list1 = [1,2,3, "Zander", True]
print(list1) 
print(type(list1))
print(list1[0])
print(list1[2])
print(list1[3])
print(list1[4])

#Negative indexing
print(list1[-3])
#same as the below
print(list1[len(list1)-3]) #This is how we convert -ve indeing to +ve indexing
#which is again same as
print(list1[2])

#Searching in list
# if 2 in list1: #It will print yes
# if "2" in list1: #It will print no as we are searching 2 as a string
if "Zander" in list1:
    print("Yes, It is present")
else:
    print("Not Found")
    
#Same for string
if "and" in "Zander":
    print("Yes, It is present")
else:
    print("Not Found")
    
#making list on the go
ls1 = [i * i for i in range(10)] # printing squares of 1st 10 integers(including 0)
print(ls1)

ls2 = [i * i for i in range(10) if i%2 == 0]
print(ls2)

#List slicing
print(list1[1:4])
print(list1[:4])
print(list1[1:len(list1)])
print(list1[1:4:2]) #jumps 1 step

