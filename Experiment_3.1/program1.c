# include <stdio.h>

int main(){
    
    float a,b,c;
    printf("Enter three sides of the triangle :\n");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b){
        if((a==b) && (b==c)){
            printf("Equilateral triangle\n");
        }
        else if((a==b) || (b==c) || (a==c)){
            printf("Isosceles triangle\n");
        }
        else if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b)){
            printf("Right angled triangle\n");
        }
        }
        else{
            printf("Invalid triangle\n");
    }
    return 0;
}