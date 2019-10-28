A=[5,8,24,56,7,9,0,2,1]
n=len(A)
for j in range(1,n):
    key=A[j]
    i=j-1
    while i>=0 and A[i]>key:
        A[i+1]=A[i]
        i=i-1
    A[i+1]=key
print(A)
    
