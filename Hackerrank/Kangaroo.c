#include <stdio.h>
int main() {
    int x1, x2, v1, v2, c, b, n = 0;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    b = x2 - x1;
    if (v1 > v2)
        c = v1 - v2;
    else
        c = v2 - v1;
    if (c > 0)
        n = b / c;
    if ((x1 + n * v1) == (x2 + n * v2))
        printf("YES");
    else
        printf("NO");
    return 0;
}
