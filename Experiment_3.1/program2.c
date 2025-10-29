# include <stdio.h>

int main(){
    float w,h,b;

    printf("Enter weight in Kg:");
    scanf("%f",&w);

    printf("Enter height in m:");
    scanf("%f",&h);

    b=(w/(h*h));
    printf("BMI is : %2f\n",b);

    if (b<=15){
        printf("Starvation");
    }
    else if (b>=15.1 && b<=17.5){
        printf("Anorexic");
    }
    else if (b>=17.6 && b<=18.5){
        printf("underweight");
    }
    else if (b>=18.6 && b<=24.9){
        printf("Ideal");
    }
    else if (b>=25 && b<=29.9){
        printf("Overweight");
    }
    else if (b>=30 && b<=39.9){
        printf("Obese");
    }
    else {
        printf("Mornidity Obese");
    }
    return 0;
}