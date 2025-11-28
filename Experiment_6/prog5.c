#include <stdio.h>
#include <string.h>

void reverse(char s[]){
    int i=0,j=strlen(s)-1;
    while(i<j){
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++; j--;
    }
}

int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    reverse(str);
    printf("Reversed: %s\n",str);
    return 0;
}