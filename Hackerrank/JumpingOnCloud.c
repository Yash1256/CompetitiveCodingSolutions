#include <stdio.h>

int main() {
    int n, j = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0; i < n - 1;) {
        if (ar[i + 2] == 1) {
            j++;
            i++;
        } else {
            j++;
            i += 2;
        }
    }
    printf("%d", j);
}
