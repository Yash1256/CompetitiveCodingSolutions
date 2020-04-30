#include <stdio.h>

int main() {
    int n, m, page = 1, k = 0;
    scanf("%d %d", &n, &m);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= ar[i]; j++) {
            if (page == j)
                k++;
            if (j % m == 0)
                ++page;
        }
        if (ar[i] % m != 0)
            ++page;
    }
    printf("%d", k);
}
