#include <stdio.h>

struct emp {
    char name[50];
    float basic,da,gross;
};

int main(){
    struct emp e[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %f",e[i].name,&e[i].basic);
        e[i].da=0.52*e[i].basic;
        e[i].gross=e[i].basic+e[i].da;
    }
    for(i=0;i<n;i++){
        printf("%s %.2f\n",e[i].name,e[i].gross);
    }
    return 0;
}