#include <stdio.h>

int main() {
    int n, k = 0, m = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0; i < n - 1; i++) {
        if (ar[i] % 2 != 0) {
            if (ar[i - 1] % 2 != 0)
                ar[i - 1] += 1;
            else
                ar[i + 1] += 1;
            ar[i] += 1;
            k += 2;
        }
    }
    if (ar[n - 1] % 2 != 0) {
        ar[n - 1] += 1;
        ar[n - 2] += 1;
        k += 2;
    }
    for (int i = 0; i < n; i++)
        if (ar[i] % 2 != 0)
            m = 1;
    if (m == 0)
        printf("%d", k);
    else
        printf("NO");
}
