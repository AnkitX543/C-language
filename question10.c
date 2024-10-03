#include<stdio.h>
int main()
{
    int mark;
    printf("enter mark");
    scanf("%d",&mark);
    if(mark>=30){
        printf(" student are passed\n");       // black a
    }
    else{
        printf(" student are not passed\n");
    }
    printf("thank you");
    return 0 ;
}
