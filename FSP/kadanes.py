lst = list(map(int, input().split()))

s = 0
maxSum = 0
for ele in lst:
    s += ele
    if(s<0):
        s = 0
    maxSum = max(maxSum,s)
print(maxSum) # Using Kadane's Algorithm

