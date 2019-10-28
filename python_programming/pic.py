import requests

#img_url="http://goo.gl/JxktPw"
img_url="http://webneel.com/daily/sites/default/files/images/daily/05-2014/12-sunrise-picture.jpg"

r=requests.get(img_url)

with open("pybook1.png","wb") as f:
    f.write(r.content)
