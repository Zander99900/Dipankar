import functools
import time

@functools.lru_cache(maxsize=None)
def fx(n):
    time.sleep(3) #It will hault the process for 3 secs
    return n*4

print(fx(10))
print("Done for 10")
print(fx(5))
print("Done for 10") #after this line will execute, it will get the below values from cache and will use memoization for faster performance
print(fx(10))
print("Done for 10")
print(fx(5))
print("Done for 10")