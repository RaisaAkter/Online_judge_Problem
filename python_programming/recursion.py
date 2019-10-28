def recursion(x):
    if x>0:
        add = x+recursion(x-1)
    else:
        return 0
    return add

print(recursion(10))
        
