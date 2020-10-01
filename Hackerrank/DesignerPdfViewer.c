#include <stdio.h>
#include <string.h>

int main() {
    int ar[26], d;
    for (int i = 0; i < 26; i++)
        scanf("%d", &ar[i]);
    char ch[11];
    scanf("%s", ch);
    d = strlen(ch);
    int count[d], j = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        switch (ch[i]) {
            case 'a':
                count[j] = ar[0];
                j++;
                break;
            case 'b':
                count[j] = ar[1];
                j++;
                break;
            case 'c':
                count[j] = ar[2];
                j++;
                break;
            case 'd':
                count[j] = ar[3];
                j++;
                break;
            case 'e':
                count[j] = ar[4];
                j++;
                break;
            case 'f':
                count[j] = ar[5];
                j++;
                break;
            case 'g':
                count[j] = ar[6];
                j++;
                break;
            case 'h':
                count[j] = ar[7];
                j++;
                break;
            case 'i':
                count[j] = ar[8];
                j++;
                break;
            case 'j':
                count[j] = ar[9];
                j++;
                break;
            case 'k':
                count[j] = ar[10];
                j++;
                break;
            case 'l':
                count[j] = ar[11];
                j++;
                break;
            case 'm':
                count[j] = ar[12];
                j++;
                break;
            case 'n':
                count[j] = ar[13];
                j++;
                break;
            case 'o':
                count[j] = ar[14];
                j++;
                break;
            case 'p':
                count[j] = ar[15];
                j++;
                break;
            case 'q':
                count[j] = ar[16];
                j++;
                break;
            case 'r':
                count[j] = ar[17];
                j++;
                break;
            case 's':
                count[j] = ar[18];
                j++;
                break;
            case 't':
                count[j] = ar[19];
                j++;
                break;
            case 'u':
                count[j] = ar[20];
                j++;
                break;
            case 'v':
                count[j] = ar[21];
                j++;
                break;
            case 'w':
                count[j] = ar[22];
                j++;
                break;
            case 'x':
                count[j] = ar[23];
                j++;
                break;
            case 'y':
                count[j] = ar[24];
                j++;
                break;
            case 'z':
                count[j] = ar[25];
                j++;
                break;
        }
    }
    int max = count[0];
    for (int i = 1; i < j; i++)
        if (max < count[i])
            max = count[i];
    printf("%d", max * d);
}
