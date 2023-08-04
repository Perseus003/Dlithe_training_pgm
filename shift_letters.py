str1=list(input())
shift=list(map(int,input().split(" ")))
str2=""
for i in range(0,len(shift)):
    for j in range(0,i+1):
        asci=ord(str1[j])
        if asci in range(97,123):
            str1[j]=chr(asci+shift[i])
        else:
            str1[j]=(chr(asci)+shift[i])%2+97
print("".join(str1))
