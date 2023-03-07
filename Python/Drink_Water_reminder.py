from win10toast import ToastNotifier
import time
myToast = ToastNotifier()
while True:
    myToast.show_toast("Python Drink Water", "Time To Drink Water!!", duration=5)
    while myToast.notification_active(): time.sleep(3600)