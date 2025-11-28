#include <stdio.h>

int main(){
    int a=10;
    float b=3.14;
    char c='A';

    int *p1=&a;
    float *p2=&b;
    char *p3=&c;

    printf("%p\n",p1);
    p1++;
    printf("%p\n",p1);

    printf("%p\n",p2);
    p2++;
    printf("%p\n",p2);

    printf("%p\n",p3);
    p3++;
    printf("%p\n",p3);

    return 0;
}