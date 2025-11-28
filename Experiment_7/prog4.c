#include <stdio.h>
#include <string.h>

union address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main(){
    union address a;
    char present[100];
    scanf("[^\n]",present);
    strcpy(a.hostel_address, present);
    printf("%s\n", a.hostel_address);
    return 0;
}