# cook your dish here
try:
    t=int(input())
    for _ in range(t):
        var=0
        temp=0
        st=input()
        ans=0
        for j in range(0,len(st),2):
            w=0
            gaa=0
            s1=st[:j]
            gaa=int(len(s1)/2)
            gbb=0
            s2=st[j:]
            gbb=int(len(s2)/2)
            e=0
            if s1[gaa:]==s1[:gaa] and s2[gbb:]==s2[:gbb]:
                p=0
                a=s1[gaa:]
                ans+=1;
                if len(a)==0:
                    temp+=1
        var=ans-temp            
        print(var)
except:
    pass
