#include <stdio.h>

int main() {
    float l1, b1, l2, b2, l3, b3;
    float p1, p2, p3, max;

    printf("Enter length and breadth of 1st rectangle: ");
    scanf("%f %f", &l1, &b1);
    printf("Enter length and breadth of 2nd rectangle: ");
    scanf("%f %f", &l2, &b2);
    printf("Enter length and breadth of 3rd rectangle: ");
    scanf("%f %f", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("The highest perimeter is: %.2f\n", max);

    return 0;
}