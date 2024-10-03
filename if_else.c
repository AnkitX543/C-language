#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>=80){
        printf("first division\n");     // black a
    }

    if(marks>=60){
        printf("second division\n");
    }
    if(marks>=40){
        printf("third division\n");
    }   

    else{
        printf("failed\n");
    }
    printf("thank you\n");
    return 0 ;
}

