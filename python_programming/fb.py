def sumDigit(n):
    digit=[int(d) for d in str(n)]
    sum=0
    for i in range(0,len(digit)):
        sum=sum+digit[i]
    print(sum)
a=int(input())
sumDigit(a)
