A,B=map(int,input().split())
odd=0
for i in range(A,B+1):
    if i%2==1:
        odd=odd+1

print(odd)
