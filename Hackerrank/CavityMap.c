#include <stdio.h>

//using namespace std;

int n;
int fun(char ar[][n], int i, int j) {
    int a = 0, s = 0, w = 0, d = 0;
    if ((int)ar[i][j] > (int)ar[i][j + 1]) {
        //printf("%c a=1",ar[i][j]);
        a = 1;
    }
    if (ar[i][j] > ar[i][j - 1]) {
        //printf("%c a=1",ar[i][j]);
        s = 1;
    }
    if (ar[i][j] > ar[i + 1][j]) {
        //printf("%c a=1",ar[i][j]);
        w = 1;
    }
    if (ar[i][j] > ar[i - 1][j]) {
        //printf("%c a=1",ar[i][j]);
        d = 1;
    }
    return (a + s + w + d);
    /*if(ar[1][1]>ar[1][0])
        printf("YES");
    if(ar[1][1]>ar[1][2])
        printf("YES");
    if(ar[1][1]>ar[0][1])
        printf("YES");
    if(ar[1][1]>ar[2][1])
        printf("YES\n");
    return 0;*/
}
int main() {
    //int n;
    scanf("%d", &n);
    char ar[n][n];
    getchar();
    for (int i = 0; i < n; i++)
        scanf("%s", ar[i]);
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < n - 1; j++)
            if (fun(ar, i, j) == 4)
                ar[i][j] = 'X';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", ar[i][j]);
        printf("\n");
    }
}
