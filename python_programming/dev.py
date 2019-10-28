t=int(input())
n=0
form=[]
while n!=t:
	ver=input()
	if ver=="wa":
	    form.append("Wrong Answer")
	elif ver=="rte":
	    form.append("Run Time Error")
	elif ver=="tle":
	    form.append("Time Limit Exceeded")
	elif ver=="ac":
            form.append("Accepted")
	n=n+1
	
for i in range(0,t):
	print(form[i])
