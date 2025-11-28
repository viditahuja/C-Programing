#include <stdio.h>

int main(){
    int a=10;
    float b=5.5;
    char c='X';

    int *p1=&a;
    float *p2=&b;
    char *p3=&c;

    printf("%p %d\n",p1,*p1);
    printf("%p %.2f\n",p2,*p2);
    printf("%p %c\n",p3,*p3);

    return 0;
}