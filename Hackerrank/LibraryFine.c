#include <stdio.h>

int main() {
    int d1, d2, m1, m2, y1, y2, fine;
    scanf("%d %d %d", &d2, &m2, &y2);
    scanf("%d %d %d", &d1, &m1, &y1);
    if (y2 > y1)
        fine = 10000;
    else if (y2 < y1)
        fine = 0;
    else if (m2 > m1)
        fine = (m2 - m1) * 500;
    else if (m2 < m1)
        fine = 0;
    else if (d2 > d1)
        fine = (d2 - d1) * 15;
    else
        fine = 0;
    printf("%d", fine);
    return 0;
}
