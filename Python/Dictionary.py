#It is a key-value pair and it is ordered
dict = {
    25:"Zander",
    30:"Prem",
    32:"Jantu",
    40:"Aditya",
    45:"Roma"
}

print(dict[32])
# print(dict[35]) #Gives error
print(dict.get(35)) #does not Gives error instead prints none
print(dict.keys())
# for key in dict.keys():
#     print(f"the value corresponding to {key} is {dict[key]}")

for key,value in dict.items():
    print(f"the value corresponding to {key} is {value}")
    
newDict = {22:"Amreet", 35:"Swagat"}
dict.update(newDict)
print(dict)

# newDict.clear()
# print(newDict)

dict.pop(32)
#if u want to remove the last key:value pair then use dict.popitem()
print(dict)

del dict[30] #if we would've written dict["30"] then it will give error as here we give the value as string and it is stored as int
print(dict)