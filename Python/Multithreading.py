import threading
import time
from concurrent.futures import ThreadPoolExecutor
def func(second):
    print(f"Sleeping for {second} seconds")
    time.sleep(second)
    
#normal way to call:
# func(4)
# func(2)
# func(3)
#This method will consume 4 + 2 + 3 = 9 seconds, while the below method takes almost 0 seconds to execute 

#Same code using threading:
def main():
    time1 = time.perf_counter()
    t1 = threading.Thread(target=func, args=[4])
    t2 = threading.Thread(target=func, args=[2])
    t3 = threading.Thread(target=func, args=[3])

    t1.start()
    t2.start()
    t3.start()
    # it is upto us if we want the functions to execute in the maximum time taken to complete task, we can do it using join() method
    t1.join()
    t2.join()
    t3.join()
    time2 = time.perf_counter()

    print(time2 - time1)
    
def poolingDemo():
    with ThreadPoolExecutor() as executor:
        # future1 = executor.submit(func, 3)
        # future2 = executor.submit(func, 2)
        # future3 = executor.submit(func, 4)
        # print(future1.result())
        # print(future2.result())
        # print(future3.result())
#if we want to map function for a collection of values at once, we can use the following
        l = [3, 5, 1, 4, 8, 7, 6]
        results = executor.map(func, l)
        for result in results:
            print(result)
              
poolingDemo()