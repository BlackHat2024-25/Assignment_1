#include<stdio.h>

int main(){

    int n, c, s = 0,r;

    printf("enter your number:");
    scanf("%d",&n);

    c = n;

    while(n>0)
    {
        r = n%10;
        s = r + (s*10);
        n = n / 10;
    }
    if(c==s)
    printf("palindromes number");

    else
    printf("not palindromes");
    return 0;
}