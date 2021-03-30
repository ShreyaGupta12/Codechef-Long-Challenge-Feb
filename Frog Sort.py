from math import ceil
for _ in range(int(input())):
    n=int(input())
    w=list(map(int,input().split()))
    s=list(map(int,input().split()))
    a=list(range(n))
    b=sorted(w)
    c=0
    if b==w :
        print(0)
        continue
    if n==2:
        if w[0]==1:
            print(0)
        else:
            print(ceil(2/s[0]))
        continue
    for i in range(1,n):
        ci=w.index(b[i])
        pi=a[w.index(b[i-1])]
        fi=ci
        while(fi<=pi):
            fi+=s[ci]
            a[ci]=fi
            c+=1
    print(c)
