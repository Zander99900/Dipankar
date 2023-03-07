from bs4 import BeautifulSoup
import requests
#need internet connection to run the below codes
#get method
r = requests.get("https://www.google.com")
# print(r.text)

#post method
# url = "https://jsonplaceholder.typicode.com/posts"

# data = {
#     "title": "Zander",
#     "body": "Dk",
#     "userId": 12
# }

# headers = {
#     'Content-type': 'application/json, charset=UTF-8',
# }

# response = requests.post(url, headers=headers, json=data)

#using bs4:
soup = BeautifulSoup(r.text,'html.parser')
print(soup.prettify()) #used to print the website in normal html format
for heading in soup.find_all("h2"):
    print(heading.text) #It is used when we need to find specific codes from a website such as finding all the lines which have h2 tag