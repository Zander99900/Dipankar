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


def analyze(request):
    # Get the text
    djtext = request.GET.get("text", "off")  # 2nd argument is default argument
    removepunc = request.GET.get("removepunc", "off")  # to check whether the checkbox is on or off
    capitalfirst = request.GET.get("capitalfirst", "off")  # to check whether the checkbox is on or off
    removespace = request.GET.get("removespace", "off")  # to check whether the checkbox is on or off
    countchar = request.GET.get("countchar", "off")  # to check whether the checkbox is on or off

    if removepunc == "on":
        analyzed = removepunctuation(djtext)
        params = {"Purpose": "Removed Punctuation", "analyzed_text": analyzed}
        return render(request, "analyze.html", params)

    elif capitalfirst == "on":
        analyzed = firstcapital(djtext)
        params = {"Purpose": "Removed Punctuation", "analyzed_text": analyzed}
        return render(request, "analyze.html", params)

    elif removespace == "on":
        analyzed = spaceremover(djtext)
        params = {"Purpose": "Removed Spaces", "analyzed_text": analyzed}
        return render(request, "analyze.html", params)

    elif countchar == "on":
        analyzed = charcount(djtext)
        params = {"Purpose": "Count Characters", "analyzed_text": analyzed}
        return render(request, "analyze.html", params)

    else:
        return HttpResponse("Error")


def removepunctuation(djtext):
    analyzed = ""
    punctuations = """!()-[]{};:'"\,<>./?@#$%^&*_~"""
    for char in djtext:
        if char not in punctuations:
            analyzed = analyzed + char
    return analyzed


def spaceremover(djtext):
    analyzed = ""
    for char in djtext:
        if char != " ":
            analyzed = analyzed + char
    return analyzed


def charcount(djtext):
    analyzed = len(djtext)
    return analyzed


def firstcapital(djtext):
    analyzed = ""
    for char in djtext:
        if ord(char[0]) >= 97 and ord(char[0]) <= 122: #ord function is used to evaluate the Ascii value of the character
            analyzed = char - 32
        else:
            analyzed = analyzed + char
    return analyzed
