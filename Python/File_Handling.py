# f = open('demofile.txt', 'r') #Gives error initially as the file does not exist
# #The 2nd char "r" is for reading, w for writing, a for append and so on
# text = f.read()
# print(text)
# f.close()

#WRITING IN A FILE
# f2 = open('demofile_new.txt', 'w')#initially if the file does not exist then it will automatically create 
# text = f2.write("This is how we use pyhton for file amnagement. ")
# f2.close()

# #APPEND CONTENT AT THE END
# f2 = open('demofile_new.txt', 'a')#initially if the file does not exist then it will automatically create 
# text = f2.write("This is how we write content at the end using pyhton ")
# f2.close()

#NEW METHOD TO DO THE SAME
with open('demofile_new.txt', 'a') as f3:
    text = f3.write("This is how we write content at the end using \'with\' method ")
    