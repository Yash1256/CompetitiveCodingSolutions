#include <stdio.h>

int main() {
    int t;
    long int b, w, bc, wc, z, temp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%ld %ld", &b, &w);
        scanf("%ld %ld %ld", &bc, &wc, &z);
        if (wc > bc + z)
            printf("%ld\n", (bc * b) + (w * (bc + z)));
        else if (bc > wc + z)
            printf("%ld\n", (wc * w) + (b * (wc + z)));
        else
            printf("%ld\n", w * wc + b * bc);
    }
}
