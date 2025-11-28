#include <stdio.h>

int fact_rec(int n){
    if(n==0) return 1;
    return n * fact_rec(n-1);
}

int fact_nonrec(int n){
    int i,f=1;
    for(i=1;i<=n;i++) f=f*i;
    return f;
}

int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);

    int ncr = fact_rec(n) / (fact_rec(r) * fact_rec(n-r));
    printf("nCr = %d\n", ncr);

    printf("Factorial Recursive: %d\n", fact_rec(n));
    printf("Factorial Non-Recursive: %d\n", fact_nonrec(n));
    return 0;
}