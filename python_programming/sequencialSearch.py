A=[5,8,24,56,7,9,0,2,1]
n=len(A)
k=int(input())
#A[n]=k
A.append(k)
i=0
while A[i]!=k:
    i=i+1
if i<n:
    print("found in index",i)
else:
    print("not found")

