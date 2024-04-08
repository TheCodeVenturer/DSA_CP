# lst = list(map(int, input().split()))
# i = 0;
# while(i<len(lst)//2):
#     lst[i], lst[len(lst)-1-i] = lst[len(lst)-1-i], lst[i]
#     i+=1
# print(lst)


lst = list(map(int, input().split()))
first = 0
last = len(lst)-1

while(first<last):
    lst[first],lst[last] = lst[last],lst[first]
    first += 1
    last -= 1
    print(lst)
