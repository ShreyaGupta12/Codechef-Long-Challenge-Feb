n,m,k=map(int,input().split())
pts=[]
for i in range(n):
    pts.append(list(map(int,input().split())))
trns=[]
for i in range(m):
    trns.append(list(map(int,input().split())))
b=list(map(int,input().split()))
c=0
print(0)
x=[]
def match(a,b):
    c=0
    for i in a:
        if i in b:
            c+=1
    return c>1
def common(a,b):
    c=0
    r=[]
    for i in a:
        if i in b:
            r.append(i)
            c+=1
        if c>1:
            return r
        
while(c<(m-k)):
    for i in range(m):
        if i not in x:
            for j in range(i,m):
                if j not in x and i!=j:
                    if match(trns[i],trns[j]):
                        #print(trns[i],trns[j])
                        print(*common(trns[i],trns[j]))
                        x.append(i)
                        x.append(j)
                        c+=1
                        break
        if c==(m-k):
            break
