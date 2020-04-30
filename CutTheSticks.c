#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    while (1) {
        int min, c = 0, k = 0;
        for (int i = 0; i < n; i++)
            if (ar[i] == 0)
                k++;
        if (k == n)
            break;
        for (int i = 0; i < n; i++) {
            if (ar[i] > 0) {
                min = ar[i];
                break;
            }
        }
        for (int i = 0; i < n; i++)
            if ((ar[i] != 0) && (min > ar[i]))
                min = ar[i];
        for (int i = 0; i < n; i++) {
            if (ar[i] > 0) {
                ar[i] -= min;
                c++;
            }
        }
        printf("%d\n", c);
    }
}
