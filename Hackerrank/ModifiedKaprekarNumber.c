#include <math.h>
#include <stdio.h>

long long int digit(long long int d) {
    long long int e = 0;
    while (d > 0) {
        d % 10;
        e++;
        d /= 10;
    }
    return e;
}
long long int sum(long long int n, long long int d) {
    long long int f = pow(10, d), g = 0;
    while (n > 0) {
        g += n % f;
        n /= f;
    }
    return g;
}
int main() {
    long long int p, q, e, d;
    scanf("%lld\n%lld", &p, &q);
    int l = 0;
    for (int i = p; i <= q; i++) {
        d = digit(i);
        e = pow(i, 2);
        if (((d * 2 == digit(e)) || ((d * 2 - 1) == digit(e))) && (sum(e, d) == i)) {
            printf("%lld ", i);
            l++;
        }
    }
    if (l == 0)
        printf("INVALID RANGE");
    return 0;
}