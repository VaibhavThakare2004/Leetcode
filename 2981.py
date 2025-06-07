s="abcaba"
a=[]
for i in range(len(s)):
    for j in range(i,len(s)):
        a.append(s[i:j+1]) 
a.sort(key=len) #sort the list in increasing order of length
a.reverse()
print(a)
b=[]
for i in a:
    flag=0
    for k in range(len(i)-1):
        if i[k]==i[k+1]:
            flag=1
        else:
            flag=0
            break
    if flag==1:
        b.append(i)
print(b)
l=-1
for i in b:
    count=0
    l=len(i)
    for j in range(len(s)):
        m=s[j:j+l]
        print(m)
        if m==i:
            count+=1
        if count>=3:
           print(l)
           break
print(l)