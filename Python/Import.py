import math as m #the shortform is how we can we use them, if we dont write them, we need to specify the entire module name before using its function
print(m.sqrt(9))
from math import sqrt,pi
print(sqrt(9)*pi) #here we can use the method directly but only if we need spcific functions

#Not recommended method
# from math import * #This will import all functions from module but this creates confusion to editor
# print(sqrt(9)) 

from math import pi, sqrt as s
print(s(9)*pi) #here we can use the sqrt func as "s" directly 

#If u want to know all functions from module use:
# import math
# print(dir(math)) #here we can use the method directly but only if we need spcific functions

import custom_func as cf
cf.welcome()
print(cf.zander)