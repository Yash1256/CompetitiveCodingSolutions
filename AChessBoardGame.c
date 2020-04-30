#include <stdio.h>
int main() {
    int t, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &x, &y);
        x = x % 4;
        y = y % 4;
        if ((x == 0) || (x == 3) || (y == 0) || (y == 3))
            printf("First\n");
        else
            printf("Second\n");
    }
    return 0;
}