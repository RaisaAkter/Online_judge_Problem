N=int(input())
hour=0
minute=int(N/60)
if minute>60:
    hour=int(N/3600)
    secnd=N%3600
    minute=int(secnd/60)
    secnd=secnd%60
else:
    secnd=N%60
    
print(str(hour)+':'+str(minute)+':'+str(secnd))
