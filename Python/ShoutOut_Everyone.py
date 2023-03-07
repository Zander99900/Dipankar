import win32com.client
speaker = win32com.client.Dispatch("SAPI.SpVoice")
contestant = ['Zander', 'Subhankari', 'Prem', 'Aditya', 'Swagat']
for winner in contestant:
    print(winner)
    speaker.Speak(f'Shoutout to {winner}!')