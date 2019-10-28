def find_fib(n):
    if n <=2:
        return 1
    fib_x,fib_next=1,1

    i=3
    while i<=n:
        i=i+1
        fib_x , fib_next=fib_next,(fib_x + fib_next)
    return fib_next


def list_fib(n):
    result=[]
    if n<2:
        result.append(1)
        return result
    
    fib_x, fib_next=1, 1
    result.append(fib_x)
    result.append(fib_next)

    i=3
    while i<=n:
        i=i+1
        fib_x, fib_next= fib_next, (fib_x+ fib_next)
        result.append(fib_next)
    return result

if __name__== "__main__":
    for x in range(1,11):
        print(find_fib(x))

if __name__=="__main__":
    print(list_fib(10))
