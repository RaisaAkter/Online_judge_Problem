import requests
import os
import webbrowser as wb

url= "http://dimikcomputing.com"
response=requests.get(url)
with open("dimik.html","w") as f:
    f.write(response.text)

file_path=os.path.realpath("dimik.html")
print(file_path)
wb.open("file://"+ file_path)
