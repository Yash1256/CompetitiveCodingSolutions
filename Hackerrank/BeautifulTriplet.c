#include <stdio.h>

int search(int ar[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (ar[i] == x)
            return 1;
    return 0;
}
int main() {
    int n, d, o = 0;
    scanf("%d %d", &n, &d);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    
    for (int i = 0; i < n - 2; i++) {
        int x = search(ar, n, ar[i] + d);
        if (x == 1) {
            x = search(ar, n, ar[i] + 2 * d);
            if (x == 1)
                o++;
        }
    }
    printf("%d", o);
}
