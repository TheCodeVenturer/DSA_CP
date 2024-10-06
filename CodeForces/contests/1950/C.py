t = int(input(""))
for i in range(t):
    time = input("")
    time = time.split(":")
    h = int(time[0])
    m = int(time[1])
    if h > 12:
        h -= 12
        h = str(h)
        print('0'*(2-len(h)) + h + ":" + time[1] + " PM")
    elif h == 12:
        print("12:" + time[1] + " PM")
    elif h == 0:
        print("12:" + time[1] + " AM")
    else:
        h = str(h)
        print('0'*(2-len(h)) + h + ":" + time[1] + " AM")