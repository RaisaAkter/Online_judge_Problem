def fastFib(n,memo={}):
    if n==1 or n==0:
        return(1)
    try:
        return(memo[n])
    except KeyError:
        result=fastFib(n-1,memo)+fastFib(n-2,memo)
        memo[n]=result
        return(result)
print(fastFib(120))
