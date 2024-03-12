# this file is created by me
from django.http import HttpResponse
#Learned how to add navigator links 
# def index(request):
#     return HttpResponse('''<a href= https://www.youtube.com/playlist?list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01>Coder Army  Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnYsdt0Dh9KkD9WFEi7nVgbe>AI Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnZjLhFRkVBsjQr5NxIiq1b3>Discrete Math Playlist </a>''')
def index(request):
    return HttpResponse('''<a href= https://www.youtube.com/playlist?list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01>Coder Army  Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnYsdt0Dh9KkD9WFEi7nVgbe>AI Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnZjLhFRkVBsjQr5NxIiq1b3>Discrete Math Playlist </a>''')