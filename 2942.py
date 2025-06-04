words=["leet","code"]
x='e'
a=[]
count=0
for i in words:
    count=count+1
    print(i)
    myst=str(i)
    for j in range(len(myst)):
        print(myst[j])
        if myst[j]==x:
            a.append(count-1)
            break
print(a)
