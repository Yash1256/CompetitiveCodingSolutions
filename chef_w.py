import itertools
t=int(input())
co=[];
for i in range(t):
    count=0
    sum=0
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    i=0
    while(i<n):
        if(a[i]>k):
            count=-1
            break
        if(sum<=k):
            sum+=a[i]
        if(sum>k):
            sum-=a[i]
            sum=0
            i-=1
        if(sum==0 or i==len(a)-1):
            count+=1
        i+=1
    co.append(count)                        
for i in co:
    print(i)
