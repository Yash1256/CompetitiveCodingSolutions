#include <math.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n], sum[n], k = 0, p = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0; i < n; i++)
        sum[i] = -1;
    for (int i = 0; i < n - 1; i++, p = 0)
        for (int j = i + 1; j < n; j++)
            if (ar[i] == ar[j])
                sum[k++] = abs(j - i);
    int min = sum[0];
    for (int i = 1; i < k; i++)
        if (min > sum[i])
            min = sum[i];
    if (sum[0] == -1)
        printf("-1");
    else
        printf("%d", min);
}
