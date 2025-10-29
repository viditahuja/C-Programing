#include <stdio.h>
int g = 10;

void func() {
    int l=5;  
    printf("Inside func():\n");
    printf("Global variable g = %d\n", g);
    printf("Local variable l = %d\n", l);
}

int main() {
    func();
    printf("\nInside main():\n");
    printf("Global variable g = %d\n", g);

    return 0;
}