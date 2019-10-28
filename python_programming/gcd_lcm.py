def gcd(a,b):
    
    while b!=0:
        a,b=b,(a%b)
    return a

t=int(input())
ans=[]

for n in range(0,t):
    a,b=map(int,input().split())
    if gcd(a,b)==1:
        ans.append("yes")
    else:
        ans.append("no")
        

for i in range(0,t):
    print(ans[i])
    
    
