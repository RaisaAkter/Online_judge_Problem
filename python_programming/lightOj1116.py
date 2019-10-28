t=int(input())
p=0
n,m=1,2
ans=[]
while p!=t:
    w=int(input())
    #mid=int(w/2)
    for m in range(2,w,2):
        for n in range(1,w,2):
            if m*n==w:
                ans.insert(p,[n,m])
                break
    else:            
        ans.append("0Impossible0")
    p=p+1
for i in range(1,t+1):
    #print("Case",str(i)+": ",ans[i-1])
    print(str(ans[i-1])[1:-1])
   

