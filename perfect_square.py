import math
t=int(input())
z=0
ans=[]
for z in range(0,t):
    n=int(input())
    for i in range(n+1,10**18):
        root=i**(1/2)
        if int(root)== i**(1/2):
            ans.append(i)
            break
    

for j in range(0,t):
    print(ans[j])
        
    
