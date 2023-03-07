#It is used for high level file operations
import shutil

shutil.copy("main.py", "Shutil_Operations/new_main.py") #to copy file
# shutil.copytree("Shutil_Operations", "Shutil_Operations_new") #to copy folder
shutil.rmtree("Shutil_Operations_new") #to delete folder
#we cannot delete files using shutil so need to use os module