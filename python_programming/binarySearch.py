def binaryS(array,item):
    n=len(array)
    if n==1:
        if array[0]!=item:
            print("not found")
            return
    mid=n//2)
    if array[mid]==item:
        print("found")
    elif array[mid]<item:
        arr=array[mid+1:n]
        binaryS(array,item)
    else:
        arr=array[:mid]
        binaryS(array,item)
    
A=[-3,-2,-1,0,1,2,3,4,5]
binaryS(A,3)
