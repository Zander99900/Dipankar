import random

def winRes(a, b, c, res):
    if(comp == AnsMatrix[a][b]):
        print("You Won!!")
        res +=1
    elif(comp == AnsMatrix[a][c]):
        print("Computer Won!!")
        res -=1
    return res

res = 0
AnsMatrix = [0, 1, -1],[-1, 0, 1],[1, -1, 0]
compChoice = ("Snake", "Water", "Gun")
for i in range(5):
    userChoice = int(input("Enter 1 for Snake, 2 for Water, 3 for Gun")) -2
    if(userChoice > 1):
        print ("Wrong Input, Game over") 
        break
    else:
        comp = random.randint(-1, 1)
        print("Computer chose Snake") if comp == -1 else print("Computer chose Water") if comp == 0 else print("Computer chose Gun")
        if(userChoice == comp):
            print("Draw!!, Next Round!")
            #win cases
        else:
            if(userChoice == -1):
                winRes(0,0,1,res)
            elif(userChoice == 0):
                winRes(1,0,2,res)
            else:
                winRes(2,1,3,res)

print("You are winner!! Congratulations") if(res>0) else print ("It's a draw") if(res == 0) else print("Computer won, better luck next time")