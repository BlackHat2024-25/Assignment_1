// 6.	Write a program to find whether a year is leap or not.

#include<stdio.h>

int main(){
    int year;

    printf("enter your year :");
    scanf("%d",&year);

    if ((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0))   
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
    
}