// 7.	WAP in C to check whether the number is odd or even.

#include<stdio.h>

int main(){
int num;

printf("Enter your number :");
scanf("%d",&num);

(num % 2==0) ? printf("%d is even number\n",num) : printf("%d is a odd number\n",num);
return 0;

}
