#we can assign the value of a variable within an expression using ":="

a = True
print(a:=False)

num = [1, 2, 3, 4, 5]
while(n:=len(num)) > 0:
    print(num.pop())
    
foods = []

while(food := input("Write your fav food: ")) != "quit":
    foods.append(food)
 
print("Your fav foods are: ")   
for f in foods:
    print(f)