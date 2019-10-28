t=int(input())
n=0
ans=[]
while n!=t:
    a,b=map(int,input().split())
    c=a/b
    d=a//b
    if c==d:
        ans.insert(n,"divisible")
    else:
        ans.insert(n,"not divisible")
    n=n+1
    
for j in range(1,t+1):
    print("Case",str(j)+":",ans[j-1])

        
