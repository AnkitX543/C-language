#include<stdio.h>
int fact(int n);
int main()
{
    printf("fact is : %d",fact(5));
    return 0;
}
//recursion function
int fact(int n){
if(n==0){
    return 1;
}
    int factNm1 = fact(n-1);   //fact of 1to n
    int factN = factNm1*n;
    return factN;
}
