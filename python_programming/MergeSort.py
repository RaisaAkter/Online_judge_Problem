import math
def Merge(A,B,C):
    i,j,k=0,0,0
    p=len(B)
    q=len(C)
    
    while i<p and j<q:
        if B[i]<=C[j]:
            A[k]=B[i]
            i=i+1
        else:
            A[k]=C[j]
            j=j+1
        k=k+1
    if i==p:
        A[k:p+q]=C[j:q]
    else:
        A[k:p+q]=B[i:p]
    return(A)


def Merge_sort(A):
    n=len(A)
    B,C=[],[]
    if n>1:
        B=A[:math.floor(n/2)]
        C=A[math.floor(n/2):n]
        B=Merge_sort(B)
        C=Merge_sort(C)
        A=Merge(A,B,C)
    return(A)
    
        


A=[3,2,8,5,1]
print(Merge_sort(A))
