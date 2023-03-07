QuestionList = ["Who is Iron Man", "Who is HomeLander", "Who is Daredevil"]
ansList = [3,1,4]
displayQuestion = ["1.Chris Evans", "2.Paul Rudd", "3.RDJ", "4.Keanu Reeves"],["1.Antoni Starr", "2.Jack Quaid", "3.Tom Cruise", "4.Karl Urban"],["1.Karen Page", "2.Dinah Madani", "3.Luke Evans", "4.Charlie Cox"]
priceList = [0, 100000, 200000]
print("Lets play KBC !!!")
money = 0
for i in range(len(QuestionList)):
    print(QuestionList[i])
    res = int(input(displayQuestion[i]))
    if(res > 4):
        print("Wrong ans, Game over!")
        break
    elif(res == ansList[i]):
        print("Correct answer, next question")
        money +=priceList[i]
    else:
        print("Wrong ans, Game over!")
        break    
print("You won: ₹",money)