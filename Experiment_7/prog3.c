#include <stdio.h>

struct book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void print(struct book b){
    printf("%d %s %s %.2f\n",b.id,b.title,b.author,b.price);
}

int main(){
    struct book b;
    scanf("%d %s %s %f",&b.id,b.title,b.author,&b.price);
    print(b);
    return 0;
}