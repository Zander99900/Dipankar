# this file is created by me
from django.http import HttpResponse
from django.shortcuts import render


# Learned how to add navigator links
# def index(request):
#     return HttpResponse('''<a href= https://www.youtube.com/playlist?list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01>Coder Army  Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnYsdt0Dh9KkD9WFEi7nVgbe>AI Playlist </a> <br> <a href= https://www.youtube.com/playlist?list=PLV8vIYTIdSnZjLhFRkVBsjQr5NxIiq1b3>Discrete Math Playlist </a>''')
def index(request):
    # params = {'name': 'dipankar', 'education':'MCA'}
    dktext = request.GET.get("text", "default")
    print(dktext)
    return render(
        request, "index.html"
    )  # use params as 3rd argument in render() if you need to send a list datareturn HttpResponse("Home")


# def capitalfirst(request):
#     return HttpResponse("Capital First")


def analyze(request):
    # Get the text
    djtext = request.GET.get("text", "off")  # 2nd argument is default argument
    removepunc = request.GET.get(
        "removepunc", "off"
    )  # to check whether the checkbox is on or off

    if removepunc == "on":
        analyzed = ""
        punctuations = """!()-[]{};:'"\,<>./?@#$%^&*_~"""
        for char in djtext:
            if char not in punctuations:
                analyzed = analyzed + char
        params = {"Purpose": "Removed Punctuation", "analyzed_text": analyzed}
        return render(request, "analyze.html", params)

    else:
        return HttpResponse("Error")


def removepunc(request):
    return HttpResponse("Remove Punctuation <br>  <a href= '/'> Go back to Home </a>")


# def removespace(request):
#     return HttpResponse("Remove Spaces <br> <a href= '/'> Go back to Home </a>")

# def newlineremove(request):
#     return HttpResponse("Remove New Line <br> <a href= '/'> Go back to Home </a>")
