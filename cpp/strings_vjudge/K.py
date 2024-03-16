t=int(input())
while(t>0):
    w=1
    vow=0
    con=0
    s=input().strip()

    for i in s:
        if(i in "aeiouAEIOU"):
            vow+=1
        elif(i==" "):
            w+=1
        else:
            con+=1

    print(w,vow,con)
    t-=1
