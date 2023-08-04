num= int(input())
count1=0
e=int(input())
m=e
for i in range(1,num):
    e= int(input())
    if(m<e):
         count1=count1+1
         m=e
print("output",count1)
