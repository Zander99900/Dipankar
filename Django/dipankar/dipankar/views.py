# this file is created by me
from django.http import HttpResponse
from django.shortcuts import render
#Learned how to add navigator links 
# def index(request):
#     return HttpResponse('''<a href= https://www.youtube.com/playlist?list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01>Coder Army  Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnYsdt0Dh9KkD9WFEi7nVgbe>AI Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnZjLhFRkVBsjQr5NxIiq1b3>Discrete Math Playlist </a>''')
def index(request):
    return HttpResponse("Home")

def capitalfirst(request):
    params = {'name': 'dipankar', 'education':'MCA'}
    return render(request, 'index.html', params)

def removepunc(request):
    return HttpResponse("Remove Punctuation <br>  <a href= '/'> Go back to Home </a>")

def removespace(request):
    return HttpResponse("Remove Spaces <br> <a href= '/'> Go back to Home </a>")

def newlineremove(request):
    return HttpResponse("Remove New Line <br> <a href= '/'> Go back to Home </a>")