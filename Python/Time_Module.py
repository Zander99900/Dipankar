import time

def usingFor():
     i = 0
     for i in range(1000):
          print(i)

def usingWhile():
     i = 0
     while i < 1000:
          print(i)
          i = i + 1
          
#we are using time module to compare while and for loops
# init = time.time()
# usingFor()
# tym = time.time() - init
# init = time.time()
# usingWhile()
# print(time.time() - init)
# print(tym)

# print(5)
# time.sleep(6)
# print("This is printed after 6 seconds")

t = time.localtime()
formatted_time = time.strftime("%d-%m-%Y %H-%M-%S", t)
print(formatted_time)


