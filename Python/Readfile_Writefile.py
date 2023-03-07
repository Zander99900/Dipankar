#The file demo3.txt stores the marks of 3 students in 3 subjects
f = open('demo3.txt', 'r')
i = 0
while True:
    line = f.readline()
    i +=1
    if not line:
        break
    m1 = int(line.split(',')[0])
    m2 = int(line.split(',')[1])
    m3 = int(line.split(',')[2])
    print(f"Marks of student {i} in Math is : {m1}")
    print(f"Marks of student {i} in Science is : {m2}")
    print(f"Marks of student {i} in English is : {m3}")
    print(line)
#Like this we can use file handling for a small database the marks that are getting printed here are in string form, we need to typecast them to int in order to perform operations

f2 = open('demo4.txt', 'w')
lines = ['line 1 \n','line 2 \n','line 3 \n']
f2.writelines(lines)
f2.close()