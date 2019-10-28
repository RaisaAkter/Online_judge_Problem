n,m=map(int,input().split())
if n>m:
    n,m=m,n

add=int((m*(m+1))/2)-int(((n-1)*n)/2)
print("Sum of "+str(n)+" to "+str(m)+" is -> "+str(add)+";")
