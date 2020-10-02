s=input().lower()
d=dict()
for i in s:
    d[i]=d.get(i,0)+1;
#print(d)
c=0
for v in d.values():
    if(v%2!=0):
        c+=1
print("YES" if c<=1 else "NO")
