month_date={'January':31,'February':28,'March':31,'April':30,'May':31 ,'June':30 ,'July':31 ,'August':31 ,'September':30 ,'October': 31,'November':30 ,'December':31}
t=int(input())
n=0
ans=[]
while n!=t:
    month1=input()
    day1,year1=map(int,input().split())
    month2=input()
    day2,year2=map(int,input().split())
    if (year1%4==0 and year1%100!=0) or year1%400==0:
        if month1=="January" or "February":
            leap=0
            while year1!=year2+1:
                leap=leap+1
                ans.insert(n,leap)
                year1=year1+1
    else:
        leap=0
        year1=year1+1
        while year1!=year2+1:
            if (year1%4==0 and year1%100!=0) or year1%400==0:
                leap=leap+1
                ans.insert(n,leap)
                year1=year+4
            year1=year1+1
    n=n+1

for i in range(1,t+1):
    print("Case",str(i)+":",ans[i-1])
            
    
