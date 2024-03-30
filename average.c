#include<stdio.h>

int main(){

    float a,b,c,d,e;
    float average, sum;

    printf("enter five numbers :");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;

    average = sum/5.0;

    printf("sum of five numbers is = %.2f\n",sum);
    printf("average of five number is = %.2f",average);

    return 0;
}