#include <math.h>
#include <stdio.h>
#include <string.h>
#define Size 100

int main() {
    char ch[Size];
    scanf("%s", ch);
    int l = strlen(ch);
    int r1, c1;
    float r2;
    r2 = sqrt(l);
    r1 = sqrt(l);
    if (r2 - r1 == 0)
        c1 = r1;
    else
        c1 = r1 + 1;
    if (r1 * c1 < l)
        r1 += 1;
    //printf("%d %d",r1,c1);
    char ar[r1][c1];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            if (i * c1 + j < l)
                ar[i][j] = ch[i * c1 + j];
            else
                ar[i][j] = ' ';
    /*for(int i=0 ; i<r1 ; i++){
        for(int j=0 ; j<c1 ; j++){
            printf("%c",ar[i][j]);
        }
        printf("\n");
    }*/
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            if (ar[j][i] == ' ')
                break;
            else
                printf("%c", ar[j][i]);
        }
        printf(" ");
    }
}