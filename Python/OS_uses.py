import os
#using a check to ensure that we don't duplicate directories
if(not os.path.exists("OS_Operations")):
    os.mkdir("OS_Operations")
#To make multiple folders
#the below loop won't work if the directory is not already present
# for i in range(1,100):
#     os.mkdir(f"OS_Operations/tutorial{i}")
#     # Similarly we can batch rename folders & files
#     os.rename(f"OS_Operations/tutorial{i}", f"OS_Operations/Renamed tutorial {i}")

#Custom Searching Algorithm
# folders = os.listdir("OS_Operations")
# for folder in folders:
#     print(folder)
#     print(os.listdir(f"OS_Operations/{folder}"))

# print(os.getcwd())
# os.chdir("D:/Google Photos")
# print(os.getcwd())

#to delete a file, use os.remove()
#to delete an empty directory, use os.rmdir()
#shutil is used to delete a directory and all of its contents