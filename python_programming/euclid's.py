m=2
n=20
r=m%n
while r!=0:
    r=m%n
    if r==0:
        print (n)
        break
    m=n
    n=r
else:
    print(n)
