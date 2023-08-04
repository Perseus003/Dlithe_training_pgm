rows=int(input())
cols=int(input())
max_count=-1
for i in range(rows):
    count1=0
    for j in range(cols):
        e = int(input())
        if e==1:
            count1+=1
    max_count = max(count1, max_count)
print("output:",max_count1)
