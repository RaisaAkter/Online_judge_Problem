t=int(input())
p=0
f=1
while t!=p:
    m,n=map(int,input().split())
    for j in range(m,n+1):
        if j==2:
            f=0
        for i in range(2,j):
            if j%i!=0:
                f=0
            else:
                f=1
                break
        if f==0:
            print(j)
    p=p+1
    
