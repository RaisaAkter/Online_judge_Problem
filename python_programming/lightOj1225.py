t=int(input())
n=0
ans=[]
while n!=t:
    a=input()
    b=[int(i) for i in str(a)]
    p = b[::-1]
    for i in range(0,len(b)):
        if p[i]== b[i]:
            ans.insert(n,"Yes")
            
        else:
            ans.insert(n,"No")
            break
    n=n+1

for i in range(1,t+1):
    print("Case",str(i)+":",ans[i-1])
