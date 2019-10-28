A=[5,4,2,3]
for i in range(0,len(A)-1):
    min=i
    for j in range(i+1,len(A)):
        if A[j]<A[min]:
            min=j
            print(A)
    A[i],A[min]=A[min],A[i]

print(A)
