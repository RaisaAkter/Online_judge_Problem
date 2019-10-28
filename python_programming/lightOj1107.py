t=int(input())
n,j,i=0,0,0
ans=[]
while n!=t:
    x1,y1,x2,y2=map(int,input().split())
    M=int(input())
    while j!=M:
        x,y=map(int,input().split())
        if x in range(x1,x2+1) and y in range(y1,y2+1):
            ans.append(["yes"])
        else:
            ans.append(["no"])
        j=j+1
    n=n+1
while i!=t:
    print("Case",str(i+1)+":")
    for k in range(0,M):
        print(''.join(ans[k]))
    i=i+1      
