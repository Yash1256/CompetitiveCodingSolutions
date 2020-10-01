#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main() {
    int n, l, k = 0, sum = 0;
    scanf("%d %d", &n, &l);
    int ar[n][2], ar1[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &ar[i][0], &ar[i][1]);
    for (int i = 0; i < n; i++)
        if (ar[i][1] == 1)
            ar1[k++] = ar[i][0];
    for (int i = 0; i < k - 1; i++)
        for (int j = 0; j < k - i - 1; j++)
            if (ar1[j] > ar1[j + 1])
                swap(&ar1[j], &ar1[j + 1]);
    for (int i = k - 1; i >= 0; i--, l--) {
        if (l > 0)
            sum += ar1[i];
        else
            sum -= ar1[i];
    }
    for (int i = 0; i < n; i++)
        if (ar[i][1] == 0)
            sum += ar[i][0];
    printf("%d", sum);
}
