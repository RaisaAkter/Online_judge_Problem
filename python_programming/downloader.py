import requests
import sys

arguments= sys.argv
img_url=arguments[1]
file_name=arguments[2]
r=requests.get(img_url)

with open(file_name,"wb") as f:
    f.write(r.content)

#https://goo.gl/Q7LmXw
