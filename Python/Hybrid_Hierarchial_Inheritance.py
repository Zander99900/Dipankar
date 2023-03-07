class A:
    pass

class B(A):
    pass

class C(A):
    pass

class D(B, C):
    pass

#The above is the example of both single & multiple inheritance hence it is hybrid inheritance

#Hierarchical Inheritance:
class H(A): #single base class is used in more than 1 child classes (earlier CLass B is created using A and now H is also created using that)
    pass