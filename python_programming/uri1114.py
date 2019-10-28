

#number:1176
"""n=int(input())
def fibo(n):
    fib=[0,1]
    for i in range(2,n+1):
        num=fib[i-1]+fib[i-2]
        fib.append(num)
    print("Fib("+str(a)+") = "+str(fib[a]))
for i in range(n):
    a=int(input())
    fibo(a)"""

#number:1151
"""n=int(input())
def fibo(n):
    fib=[0,1]
    for i in range(2,n):
        num=fib[i-1]+fib[i-2]
        fib.append(num)
    print(" " . join(map(str, fib)))
fibo(n)"""       
#number:1164
"""n=int(input())
for i in range(n):
    x=int(input())
    sum=0
    l=x//2
    for j in range(1,l+1):
        sum=sum+j
        if sum==x:
            print(x,"eh perfeito")
            break
    else:
        print(x,"nao eh perfeito")"""
    

#number:1142
"""n=int(input())
x=1
for i in range(n):
    print(x,x+1,x+2,"PUM")
    x=x+4"""
#number:1114
"""password=2002
while True:
    user=int(input())
    if user==password:
        print("Acesso Permitido")
        break
    else:
        print("Senha Invalida")
        continue"""
#number:1116
"""n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    
    #b=int(input())
    if b==0:
        print("divisao impossivel")
    else:
        div=a/b
        print(div)"""
#number:1132
"""a=int(input())
b=int(input())
if a>b:
    a,b=b,a
sum=0
for i in range(a,b+1):
    if i%13!=0:
        sum=sum+i

print(sum)"""
#number:1133
"""a=int(input())
b=int(input())
if a>b:
    a,b=b,a
for i in range(a+1,b):
    if i%5==2 or i%5==3:
        print(i)"""
    
