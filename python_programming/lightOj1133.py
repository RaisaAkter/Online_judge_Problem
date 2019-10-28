p=0
array=[]
ans=[]
def sum(d):
    for i in range(0,len(array)):
        array[i]=array[i]+d
def multiple(d):
    for i in range(0,len(array)):
        array[i]=array[i]*d
def divide(k):
    for i in range(0,len(array)):
        array[i]=int(array[i]/k)
def reverse():
    return (array[::-1])
def swap(x,y):
    array[x],array[y]=array[y],array[x]
t=int(input())

while p!=t:
    m,n=map(int,input().split())
    array=list(map(int,input().split()))
    #for i,val in enumerate(arr):
        #array[i]=int(val)
    for j in range(1,n+1):
        f=input()
        if f=="S":
            arg=int(input())
            sum(arg)
        elif f=="M":
             arg=int(input())
             multiple(arg)
        elif f=="D":
             arg=int(input())
             divide(arg)
        elif f=="R":
             array=reverse()
        elif f=="P":
             arg,arg1=map(int,input().split())
             swap(arg,arg1)
    ans.insert(p,array)
    p=p+1

for z in range(0,t):
    print("Case",str(z+1)+":")
    r=ans[z]
    print(' '.join(map(str,r)))

    
