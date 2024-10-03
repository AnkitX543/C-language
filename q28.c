#include<stdio.h>
void namste();
void bonjour();

int main()
{
    printf("enter f for french & i for india :"); 
    char ch;
    scanf("%c",&ch);
    if (ch =='i')
    {
        namste();
    }
    else {
        bonjour();
    }
    return 0;
}

void namste()
{
printf("namste\n");
}
void bonjour()
{
printf("bonjour\n");}