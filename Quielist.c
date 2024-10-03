#include<stdio.h>
#include<stdlib.h>
struct QUEUE
{
    int data;
    struct QUEUE *link;
};
struct QUEUE *FRONT = NULL, *REAR = NULL;
void push(int item){

 struct QUEUE *temp = (struct QUEUE *)malloc(sizeof(struct QUEUE));
 if (temp == NULL){
    printf("Memory allocated failed\n");
    return 0;
 }
 temp->data = item;
 temp->link = NULL;

 if (FRONT == NULL){
    FRONT = temp;
    REAR = temp;
 }
 else{
    REAR->link = temp;
    REAR = temp;
 }
}
int pop()
{
    if(FRONT == NULL){
        printf("Queue is empty\n");
        return -1;
    }
    struct QUEUE *temp = FRONT;
    int item = temp->data;
    FRONT = FRONT->link;
    if(FRONT == NULL){
        REAR = NULL;
    }
    free(temp);
    return item;

}
int isEMPTY(){
    return FRONT == NULL;
}
void display(){
    struct QUEUE *temp = FRONT;
    if(temp == NULL){
        printf("Queue is empty\n");
        return;
    }
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}
int main()
{
    push(10);
    push(20);
    push(30);

    printf("Queue is contents:");
    display();

    printf("popped item : %d",pop());
    printf("Queue contents after pop : ");
    return 0;
}


