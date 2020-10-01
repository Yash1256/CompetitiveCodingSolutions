#include <stdio.h>

int main() {
    int t, n, k, l;
    scanf("%d %d", &n, &t);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &k, &l);
        int min = ar[k];
        for (int m = k + 1; m <= l; m++)
            if (min > ar[m])
                min = ar[m];
        printf("%d\n", min);
    }
}
