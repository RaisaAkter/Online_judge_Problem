import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    pair=[] 
    t=0
    p=0
    for i in ar:
      if (i in pair):
        ar.remove(i)
      else:
        t=ar.count(i)
        if t!=0 and t>1:
          t=int(t/2)
          print(t)
          p=p+t
          print(p)
        pair.append(i)
    print(pair)
    return(p)

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    print(str(result) + '\n')

    #fptr.close()
	
	
#new program
#!/bin/python3

"""import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    sum=0
    for i in bill:
        sum=sum+i
    sum=sum-bill[k]
    avg=sum//2
    pay=b-avg
    if pay==0:
        print("Bon Appetit")
    else:
        print(pay)

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)"""

