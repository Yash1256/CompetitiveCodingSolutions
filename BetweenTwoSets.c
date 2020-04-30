#include <stdio.h>
int main() {
    int m, n, o = 0;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int max = a[0];
    for (int i = 1; i < m; i++)
        if (max < a[i])
            max = a[i];
    int min = b[0];
    for (int i = 1; i < n; i++)
        if (min > b[i])
            min = b[i];
    if (max < min) {
        for (int i = max, k = 0; i <= min; i++, k = 0) {
            for (int j = 0; j < m; j++) {
                if (i % a[j] != 0)
                    break;
                else
                    k++;
            }
            for (int j = 0; j < n; j++) {
                if (b[j] % i != 0)
                    break;
                else
                    k++;
            }
            if (k == m + n)
                o++;
        }
    }
    printf("%d", o);
}
