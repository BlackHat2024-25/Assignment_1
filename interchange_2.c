// 4. b.	Write a program in C to interchange values of two numbers without using third variable. 

#include<stdio.h>

int main(){ 
    int num1, num2;

    printf("Enter value for num1 :");
    scanf("%d", &num1);

    printf("Enter value for num2 :");
    scanf("%d",&num2);

  
    printf("Before interchange: num1 = %d, num2 = %d,\n", num1,num2);

    // swapping logic using a third variable


num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;
 

   
printf("After interchange: num1 = %d, num2 = %d,\n", num1,num2);
    return 0;
}
