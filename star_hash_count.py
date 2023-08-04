s=input()
count_star=0
c_h=0
for i in s:
    if(i=='*'):
        count_star=count_star+1
    else:
        c_h=c_h+1
        
if(c_h==count_star):
    print(0)
elif(c_h>count_star):
    print(count_star-c_h)
else:
    print(count_star+c_h)
