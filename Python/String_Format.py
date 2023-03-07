letter = "My Name is {}, and I love {}"
name = "Zander"
var = "Movies"
print(letter.format(name, var)) #old method

#f-string begins
print(f"My Name is {name}, and I love {var}")
#if u want to print the line as it is then use {{}} 

price = 48.0999
txt = f"for only {price:.2f}"
print(txt) #Rounded off to 2 decimal places
