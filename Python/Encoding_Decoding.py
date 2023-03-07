# Write a python program to translate a message into secret code language. Use the rules below to translate normal English into secret code language

# Coding:
# if the word contains atleast 3 characters, remove the first letter and append it at the end
#   now append three random characters at the starting and the end
# else:
#   simply reverse the string

# Decoding:
# if the word contains less than 3 characters, reverse it
# else:
#   remove 3 random characters from start and end. Now remove the last letter and append it to the beginning

# Your program should ask whether you want to code or decode
# works good only for 1 word and not a collection of words
# def coding(a):
#     if(len(a)<3):
#         a.reverse()
#         return a
#     else:
#         b = a[0]
#         c = ("sdc"+a[1:]+b+"mjb")
#         return c

# def decoding(a):
#     if(len(a)<3):
#         a.reverse()
#         return a
#     else:
#         b = a[3:-3]
#         c = (b[len(b)-1]+b[:len(b)-1])
#         return c
# a = "wqeanderzswd" for testing decoding
# a = input("Enter Message: ")
# choice = input("Enter 1 for coding, 2 for decoding: ")
# if(choice==1):
#     b = coding(a)
#     print(b)
# else:
#     b = decoding(a)
#     print(b)

# Proper solution
import random
import string

st = input("Enter message: ")
words = st.split(" ")
coding = int(input("Enter 1 for coding, 2 for decoding: "))
coding = True if (coding == 1) else False
if(coding):
    nwords = []  # Splitting the string into lists
    for word in words:
        if (len(word) >= 3):
            r1 = ''.join((random.choice(string.ascii_lowercase) for x in range(3)))
            r2 = ''.join((random.choice(string.ascii_lowercase) for x in range(3)))
            new_st = r1 + word[1:] + word[0] + r2
            nwords.append(new_st)
        else:
            nwords.append(word[::-1]) #reverse the string
    print(" ".join(nwords))
else:
    nwords = []  # Splitting the string into lists
    for word in words:
        if (len(word) >= 3):
            new_st = word[3:-3]
            new_st = new_st[-1] + new_st[:-1]
            nwords.append(new_st)
        else:
            nwords.append(word[::-1])
    print(" ".join(nwords))