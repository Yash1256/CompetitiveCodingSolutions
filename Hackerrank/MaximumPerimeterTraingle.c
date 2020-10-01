#include <stdio.h>

int main() {
    int n, k = 0;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &ar[i]);
    for (int i = 0; i < n - 1; i++) {
        long long int max;
        for (int j = i + 1; j < n; j++) {
            if (ar[j] > ar[i]) {
                max = ar[i];
                ar[i] = ar[j];
                ar[j] = max;
            }
        }
    }
    for (int i = 0; i < n - 2; i++) {
        if (ar[i] < ar[i + 1] + ar[i + 2]) {
            k = 1;
            printf("%lld %lld %lld", ar[i + 2], ar[i + 1], ar[i]);
            break;
        }
    }
    if (k == 0)
        printf("-1");
}
