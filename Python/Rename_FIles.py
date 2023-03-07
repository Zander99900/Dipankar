import os
    
files = os.listdir("File_Rename")
i = 1
for file in files:
    if file.endswith(".jpg"):
        print(file)
        os.rename(f"File_Rename/{file}", f"File_Rename/{i}.jpg")
        i = i + 1
