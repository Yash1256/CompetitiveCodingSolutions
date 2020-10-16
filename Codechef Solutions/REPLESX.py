for t in range(int(input())):
    n, x, p, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    ans = 0
    if p==k:
        if a[p-1]==x:
            ans=0
        elif a[p-1]<x:
            for i in range(p-1,n):
                if a[i]<x:
                    ans+=1
        elif a[p-1]>x:
                for i in range(p):
                    if a[i]>x:
                        ans+=1
    elif p<k:
        if a[p-1]==x:
            ans=0
        else:
            if a[p-1]<x:
                ans=-1
            elif a[p-1]>x:
                for i in range(p):
                    if a[i]>x:
                        ans+=1
    elif p>k:
        if a[p-1]==x:
            ans=0
        else:
            if a[p-1]>x:
                ans=-1
            elif a[p-1]<x:
                for i in range(p-1,n):
                    if a[i]<x:
                        ans+=1
    print(ans)
