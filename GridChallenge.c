#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        char ar[n][n], temp;
        for (int j = 0; j < n; j++)
            scanf("%s", ar[j]);
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n; l++) {
                    if (ar[j][k] < ar[j][l]) {
                        temp = ar[j][k];
                        ar[j][k] = ar[j][l];
                        ar[j][l] = temp;
                    }
                }
            }
        }
        int t = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n - 1; k++) {
                if (ar[k][j] <= ar[k + 1][j])
                    continue;
                else {
                    t = 1;
                    break;
                }
            }
            if (t == 1)
                break;
        }
        if (t == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
