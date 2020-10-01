#include <stdio.h>
int main() {
    char a[10];
    for (int i = 0; i < 10; i++)
        scanf("%c", &a[i]);
    if (a[8] == 'P' && a[9] == 'M') {
        if (a[0] == '0') {
            if (a[1] == '8') {
                a[0] = '2';
                a[1] = '0';
            } else if (a[1] == '9') {
                a[0] = '2';
                a[1] = '1';
            } else {
                a[0] = a[0] + 1;
                a[1] = a[1] + 2;
            }
        } else {
            if ((a[0] == '1') && (a[1] == '2')) {
                a[0] = '1';
                a[1] = '2';
            } else {
                a[0] = a[0] + 1;
                a[1] = a[1] + 2;
            }
        }
    } else {
        if ((a[0] == '1') && (a[1] == '2')) {
            a[0] = '0';
            a[1] = '0';
        }
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", a[i]);
    }
    return 0;
}
