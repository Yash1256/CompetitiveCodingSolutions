#include <stdio.h>

int main() {
    int n, k, e = 100;
    scanf("%d %d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int end = 0;
    while (1) {
        end = (end + k) % n;
        if (end == 0) {
            if (ar[end] == 1)
                e -= 3;
            else
                e -= 1;
            break;
        } else {
            if (ar[end] == 1)
                e -= 3;
            else
                e -= 1;
        }
        //printf("%d ",e);
    }
    printf("%d", e);
}
