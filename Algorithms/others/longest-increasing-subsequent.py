a = [int(input()) for i in range(int(input()))]
m = [float('inf')]*(len(a)+1)
ans = 0
for i, v in enumerate(a):
    l, r = 0, i + 1
    while r - l > 1:
        k = l + r >> 1
        if m[k] < v:
            l = k
        else:
            r = k
    m[r] = v
    ans = max(ans, r)
print(ans)
