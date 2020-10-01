#include <stdio.h>
int main() {
    long ar[1000000], l = 0;
    long n, k;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++)
        scanf("%ld", &ar[i]);
    k = ar[0];
    for (int i = 1; i < n; i++)
        if (k < ar[i])
            k = ar[i];
    for (int i = 0; i < n; i++) {
        if (k != ar[i])
            continue;
        else
            l++;
    }
    printf("%ld", l);
}
