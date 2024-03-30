#include<stdio.h>

int main(){

    int n, sum;

    printf("enter n numbers");
    scanf("%d", &n);

    sum = n * (n + 1)/2;

    printf("sum of %d numbers is :%d", n, sum);
    return 0;
}