def gcd(a,b):
    
    while b!=0:
        a,b=b,(a%b)
    return a

a,b=map(int,input().split())
ans=gcd(a,b)
print(ans)


"""def lcm(a,b):
    
    c=b
    for i in range(1,(a*b)+1):
        if (c%a==0) and (c%b==0):
            return c
            break
        else:
            c=c+1

t=int(input())
ans=[]

for n in range(0,t):
    a,b=map(int,input().split())
    if a*b==lcm(a,b):
        ans.append("yes")
    else:
        ans.append("no")
        

for i in range(0,t):
    print(ans[i])"""
    
    

