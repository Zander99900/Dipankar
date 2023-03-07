a = "Zander"
print(a.upper()) #strings are immutable so they create a copy of this string
print(a.lower())
print(a.count("Zander"))
b = "!!!Jantu!!!!!"
print(b.rstrip("!"))
print(b.endswith("!"))
c = "This is a python program"
print(c.isalnum()) # if the string only has A-Z, a-z, 0-9 the ans is false because it contains " "
print(c.isalpha()) # if the string only has A-Z, a-z
e = "ZANDER"
print(e.islower())
print(e.isupper())
f = "Jantu Harami\n"
print(f.isprintable()) #\n is not a printable character
print(f.isspace())
str1 = "He's name is Dan. He is an honest man." #python cannot understand he's and is
print(str1.find("is")) #if not found then it will return -1
print(str1.startswith("He"))
print(str1.endswith("is", 15, 25))
# print(str1.index("names")) #if not found then it will return error

blogHeading = "intro tO cPp"
print(blogHeading.capitalize())
f2 = f.replace("Jantu","Subhankari")
print(f2)