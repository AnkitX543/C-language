#include<stdio.h>
int main()
{
    int issunday = 1;
    int issnowing = 1;
    printf("answer<<< %d\n",issunday&&issnowing);
    int ismonday = 1;
    int israining = 1;
    printf("second ans<<%d\n",ismonday&&israining);
    int x;
    printf("enter a number");
    scanf("%d",&x);
    int p = x>9&&x<100;
    printf("%d",p);
    return 0;
}