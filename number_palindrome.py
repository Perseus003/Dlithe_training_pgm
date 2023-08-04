num1=int(input())
m=num1
sum1 = 0
while num1!=0:
    digit = num1%10
    sum1=sum1*10+digit
    num1=num1//10

if m==sum1:
    print("It's a Palindrome")
else:
    print("Not a palindrome")
