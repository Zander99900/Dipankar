# Steps to configure this E-Commerce Website
## This project contains 2 apps
### 1. Shop
To create shop app run the following command
 ```
 python manage.py startapp shop
 ```
### 2. Blog
To create shop app run the following command 
```
python manage.py startapp blog
```
# Flow of control in this app
### Initially the app will navigate to urls.py in ZanderStore Folder
### It will receive 2 paths `shop/` & `blog/` ,according to user choice, it will then navigate to the `urls.py` file of the respective app
### Once it reaches the required `urls.py` file, it will then navigate to the `views.py` file for execution of the required function  

 ### to fix the issue: "You have 18 unapplied migration(s). Your project may not work properly until you apply the migrations for app(s): admin, auth, contenttypes, sessions." use the following command:
```
'python manage.py migrate'
```
This will create sqlite tables for all required functions/methods

### Use this to save all your migrations in one file 
```
python manage.py makemigrations
```
