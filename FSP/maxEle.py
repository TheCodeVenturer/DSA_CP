def findMaxi(lst:list,start:int,end:int) -> int:
    if(start == end):return lst[start]
    mid = (start+end)//2
    return max(findMaxi(lst,start,mid),findMaxi(lst,mid+1,end))

lst = list(map(int,input().split()))

maxi = -99999
for ele in lst:
    maxi = max(ele,maxi)
print(maxi) # Using Linear Search
print(findMaxi(lst,0,len(lst)-1)) # Using Divide and Conquer

