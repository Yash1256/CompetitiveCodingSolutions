T = int(input())
for _ in range(T):
    x, y, z = map(int, input().split(" "))
    a = abs(x-z)
    b = abs(y-z)
    if a == b:
        print("Mouse C")
    elif a < b:
        print("Cat A")
    else:
        print("Cat B")