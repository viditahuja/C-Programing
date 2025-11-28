#include <stdio.h>

struct complex {
    float r,i;
};

struct complex read(){
    struct complex c;
    scanf("%f %f",&c.r,&c.i);
    return c;
}

void write(struct complex c){
    printf("%.2f + %.2fi\n",c.r,c.i);
}

struct complex add(struct complex a,struct complex b){
    struct complex c;
    c.r=a.r+b.r;
    c.i=a.i+b.i;
    return c;
}

struct complex sub(struct complex a,struct complex b){
    struct complex c;
    c.r=a.r-b.r;
    c.i=a.i-b.i;
    return c;
}

int main(){
    struct complex c1,c2,s1,s2;
    c1=read();
    c2=read();
    s1=add(c1,c2);
    s2=sub(c1,c2);
    write(s1);
    write(s2);
    return 0;
}