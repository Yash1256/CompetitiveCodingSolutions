#include <stdio.h>

int main() {
    int m, p, d, s;
    scanf("%d %d %d %d", &m, &p, &d, &s);
    int i, sum = 0;
    for (i = 0; sum <= s; i++) {
        if (m <= d) {
            m = d;
            sum += m;
        } else {
            sum += m;
            m -= p;
        }
    }
    printf("%d", i - 1);
}
