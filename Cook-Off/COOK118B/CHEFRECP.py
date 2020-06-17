# cook your dish here
try:
    te=int(input())
    for _ in range(te):
        x=set()
        n=int(input())
        y=set()
        bl=1
        a=list(map(int,input().split()))
        i=0
        while i<n:
            e=a[i]
            w=0
            if e in x:
                bl=0
                break
            else:
                x.add(e)
                
            while i<n and e==a[i]:
                i+=1
                w+=1
                
            if w in y:
                bl=0
                break
            else:
                y.add(w)
        if bl==1:
            print("YES")
        else:
            print("NO")
        
except:
    pass
