// 4.	a.	Write a program in C to interchange values of two numbers using third variable. 

#include<stdio.h>

int main(){
    int num1, num2, Interchange;

    printf("Enter value for num1 :");
    scanf("%d", &num1);

    printf("Enter value for num2 :");
    scanf("%d",&num2);

    printf("Before interchange: num1 = %d, num2 = %d\n", num1,num2);

    // swapping logic using a third variable

    Interchange = num1;
    num1 = num2;
    num2 = Interchange;
    

    printf("After interchange: num1 = %d. num2 = %d\n", num1,num2);
    return 0;
}
