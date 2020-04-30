#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n], count[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (int i = 0, p = 0, q = 0, r = 0; i < n; i++, p = 0, q = 0, r = 0) {
        for (int j = 0; j < n; j++) {
            if (ar[i] == ar[j])
                r++;
            if ((ar[i] + 1) == ar[j])
                p++;
            if ((ar[i] + 1) == ar[j])
                q++;
        }
        p = (p > q) ? p : q;
        count[i] = p + r;
        //printf("%d ",count[i]);
    }
    int max = count[0];
    for (int i = 0; i < n; i++)
        if (max <= count[i])
            max = count[i];
    printf("%d", max);
}
