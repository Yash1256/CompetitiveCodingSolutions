#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int min, max, k = 0, l = 0;
    min = max = ar[0];
    for (int i = 1; i < n; i++) {
        if (min > ar[i]) {
            k++;
            min = ar[i];
        }
        if (max < ar[i]) {
            l++;
            max = ar[i];
        }
    }
    printf("%d %d", l, k);
    return 0;
}
