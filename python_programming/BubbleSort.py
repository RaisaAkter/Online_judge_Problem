A=[5,8,24,56,7,9,0,2,1]
n=len(A)
for i in range(0,n-1):
    for j in range(0,(n-1-i)):
        if A[j+1]<A[j]:
            A[j],A[j+1]=A[j+1],A[j]

print(A)
