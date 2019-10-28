import math
#b=math.ceil(5.5)
A=[9,8,7,6,5,4,3,2,1]
B=[]
C=[]
n=len(A)
B[:math.floor(n/2)]=A[:math.floor(n/2)]
C[:math.ceil(n/2)]=A[math.floor(n/2):n]
print(B)
print(C)
print(C[:math.floor(len(B)/2)])


Merge_sort(B[:math.floor(len(B)/2)])
Merge_sort(C[:math.ceil(len(C)/2)])
