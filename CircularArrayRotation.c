#include <stdio.h>

int main() {
    int n, k, q, c = 0;
    scanf("%d %d %d", &n, &k, &q);
    int ar[n], ar1[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int qr[q];
    for (int i = 0; i < q; i++)
        scanf("%d\n", &qr[i]);
    /*for(int i=0;i<k;i++)          this code exceeds time limit
    {
        int temp=ar[n-1];
        for(int j=n-1;j>=0;j--)
        {
            if(j==0)
                ar[j]=temp;
            else
                ar[j]=ar[j-1];
        }
    }*/
    if (k > n)
        k = k - (k / n) * n;
    for (int i = n - k; i < n; i++)
        ar1[c++] = ar[i];
    for (int i = 0; i < n - k; i++)
        ar1[c++] = ar[i];
    for (int i = 0; i < q; i++)
        printf("%d\n", ar1[qr[i]]);
}
