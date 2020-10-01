#include <math.h>
#include <stdio.h>

int main() {
    int n;
    long long int sum = 0, temp;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &ar[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (ar[i] < ar[j]) {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        sum = (ar[i] * pow(2, i)) + sum;
    printf("%lld", sum);
    /*for(int i=0;i<n;i++)
        printf("%d ",ar[i]);*/
}
