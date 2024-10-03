#include<stdio.h>
#include<math.h>
int main()
//odd == 0
//even==1

{
    int x;
    printf("enter a numner");
    scanf("%d",x);
    int a = x%2==0;
    printf("%d",a);
    return 0;
}