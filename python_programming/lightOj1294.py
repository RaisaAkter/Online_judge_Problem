t=int(input())
p=0
a=[]
while p!=t:
    n,m=map(int,input().split())
    a.insert(p,int(n*m/2))
    p=p+1
for i in range(0,t):
    print("Case",str(i+1)+":",a[i])
            
        
