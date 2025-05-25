def add(a,b):
        st=""
        c=0
        for i in range(len(a)+1 if (len(a)>len(b)) else len(b)+1):
            if i==0:
                continue
            #print(str(i)+"th index")
            na=int(a[-i]) if len(a)>=i else 0
            nb=int(b[-i]) if len(b)>=i else 0
            n=na+nb+c
            if n==3:
                n=1
                c=1
            elif n==2:
                n=0
                c=1
            elif n==1:
                n=1
                c=0
            else:
                n=0
                c=0
            st=str(n)+st
            #print(st)
        if c!=0:
            return str(c)+st
        else:
            return st

        
        
print(add("0","0"))