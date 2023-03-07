#The main purpose of using asyncio is to perform multiple processes parallely so as to save time & memory
import time
import asyncio
async def func1():
    await asyncio.sleep(3)
    print("This is func 1")
    
#As waiting time is less so func2 will print 1st
async def func2():
    await asyncio.sleep(2)
    print("This is func 2")
    
async def func3():
    await asyncio.sleep(4)
    print("This is func 3")

async def main():
    #this will run the funcs in serial order
    # await func1()
    # await func2()
    # await func3()
    
#In general func1 will run, then func2 and func3 at the end but here all 3 funcs will start executing at the the same time
    L = await asyncio.gather(
        func1(),
        func2(),
        func3(),
    )
    print(L)
    
    #This will schedule func1 after all the tasks, if func1 needs 3 seconds to execute, then it will start from func2 and after func1 completes, then func3 starts
    # task = asyncio.create_task(func1())
    # await func2()
    # await func3()
    
asyncio.run(main())