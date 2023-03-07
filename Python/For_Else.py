for i in range(5):
    print(i)
    #Important for interview
    if i == 4:
        break #ends the loop so the else loops not working
    
else:
    print("it exists for loop")
    
for x in range(6):
    print("Iteration no {} in for loop".format(x+1))
    
else:
    print("Else block in loop")
print("Out Of loop")