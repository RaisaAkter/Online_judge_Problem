t=int(input())
m=t+1
for i in range(1,m):
    n=input()
    list(str(n))
    #map(int, str(n))
    c=n[0]
    for j in range(0,len(n),2):
        if n[j]==n[0]:
            temp=1
        else:
            temp=0
    if temp==1:
        print("Yes")
    else:
        print("No")
