def factorial(n):
    if(n == 0 or n == 1):
        return 1
    else:
        return n*factorial(n-1)
    
print(factorial(5))
#Dp method
def fibonacci(n):
    f = [0,1]
    for i in range(2, n+1):
            f.append(f[i-1] + f[i-2])
    else:
        return f[n]
    
for i in range(7):
    print(fibonacci(i))