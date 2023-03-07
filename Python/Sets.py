# set1 = {6,2,5,4,2} #The values are not repeating and order is not maintained
# set2 = {5, 7, 2, 3}
# print(set1)

# zander = {} # it will show dictionary datatype
# zander_set = set()
# print(type(zander))
# print(type(zander_set))
# for value in set1:
#     print(value)
    
# #set operation
# print(set1.union(set2)) #set1 & set2 remains untouched in this case
# print(set1)

# # set1.update(set2) #we use update then the original set value will be modified
# # print(set1)

# set1.intersection(set2)
# print(set1)

# set3 = set1.symmetric_difference(set2)
# print(set3)

# set3 = set1.difference(set2)
# print(set3)

boys = {"Butcher", "Hughie", "Kimiko", "StarLight"}
Super7 = {"HomeLander", "A-Train","Deep", "StarLight"}
middlemen = {"Hughie", "Kimiko", "StarLight"}
dogla = boys.issuperset(Super7)
print(dogla)
dogla = boys.issubset(middlemen) #boys set is not a part of middlemen as there exists some elements which are not part of middlemen
print(dogla)
dogla = boys.issuperset(middlemen) #midlemen is a part of boys set
print(dogla)
dogla = boys.issubset(Super7)
print(dogla)

#Many more methods like clear, delete, discard, remove all exists in python

# del middlemen
# print(middlemen) #gives error

middlemen.clear()
print(middlemen) #empty set

# remove will give error if the value is not present in set
# boys.remove("StarLight123")
# print(boys)
boys.discard("StarLight123")
print(boys)