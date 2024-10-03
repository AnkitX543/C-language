#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter your number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factriol is%d",fact);
    return 0;
} 