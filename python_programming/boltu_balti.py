try:
    while True:
        n,m=map(int,input().split())
        if n<m:
            sum1=(m*(m+1))/2
            sum2=((n-1)*n)/2
            sum=int(sum1-sum2)
            print("Sum of "+str(n)+" to "+str(m)+" is -> "+str(sum)+";")

        if n>m:
            sum1=((m-1)*m)/2
            sum2=(n*(n+1))/2
            sum=int(sum2-sum1)
            print("Sum of "+str(n)+" to "+str(m)+" is -> "+str(sum)+";")

except EOFError:
    pass
