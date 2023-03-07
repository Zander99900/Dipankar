# with open('demofile.txt') as f:
#     print(type(f))
    
#     f.seek(10) #starts reading the file from 10th byte 
    
#     print(f.tell()) #tells from which point it is reading the file
#     data = f.read(7)
#     print(data)

with open('demofile.txt', 'w') as f:
    f.write("Hello boyss")
    f.truncate(5) #It basically means that i want to keep my file size under 5 bytes so i allow only 5 characters to be written
