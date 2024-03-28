t = int(input(""))
for i in range(t):
    n = int(input(""))
    for j in range(n):
        s = j%2
        for k in range(n):
            if k%2 == s:
                print("##", end="")
            else:
                print("..", end="")
        print()
        for k in range(n):
            if k%2 == s:
                print("##", end="")
            else:
                print("..", end="")
        print()