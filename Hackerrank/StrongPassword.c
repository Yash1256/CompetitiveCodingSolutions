#include <stdio.h>

int main() {
    int n, a[4] = {0, 0, 0, 0}, j = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a') && (s[i] <= 'z'))
            a[0]++;
        else if ((s[i] >= 'A') && (s[i] <= 'Z'))
            a[1]++;
        else if ((s[i] >= '0') && (s[i] <= '9'))
            a[2]++;
        else
            a[3]++;
    }
    if (a[0] == 0)
        j++;
    if (a[1] == 0)
        j++;
    if (a[2] == 0)
        j++;
    if (a[3] == 0)
        j++;
    if (n >= 6)
        printf("%d", j);
    else {
        if (n == 5)
            if (j == 0)
                printf("1");
            else
                printf("%d", j);
        if (n == 4)
            if ((j == 0) || (j == 1))
                printf("2");
            else
                printf("%d", j);
        if (n == 3)
            if ((j == 0) || (j == 1) || (j == 2))
                printf("3");
            else
                printf("%d", j);
        if (n == 2)
            printf("4");
        if (n == 1)
            printf("5");
        if (n == 0)
            printf("6");
    }
}
