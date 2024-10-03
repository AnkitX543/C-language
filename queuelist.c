#include<stdio.h>
#include<stdlib.h>

// Structure for a queue node
struct QUEUE {
    int data;
    struct QUEUE *link;
};

// Pointers to FRONT and REAR of the queue
struct QUEUE *FRONT = NULL, *REAR = NULL;

// Function to insert (enqueue) an element into the queue
void push(int item) {
    struct QUEUE *temp = (struct QUEUE *)malloc(sizeof(struct QUEUE));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;  // Corrected from 'return 0;' to 'return;' since the function is void
    }
    temp->data = item;
    temp->link = NULL;

    if (FRONT == NULL) {  // If queue is empty
        FRONT = temp;
        REAR = temp;
    } else {
        REAR->link = temp;
        REAR = temp;
    }
}

// Function to remove (dequeue) an element from the queue
int pop() {
    if (FRONT == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    struct QUEUE *temp = FRONT;
    int item = temp->data;
    FRONT = FRONT->link;

    if (FRONT == NULL) {  // If queue becomes empty
        REAR = NULL;
    }
    free(temp);
    return item;
}

// Function to check if the queue is empty
int isEMPTY() {
    return FRONT == NULL;
}

// Function to display the contents of the queue
void display() {
    struct QUEUE *temp = FRONT;
    if (temp == NULL) {
        printf("Queue is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    printf("Queue contents: ");
    display();  // Display the queue after pushing elements

    printf("Popped item: %d\n", pop());  // Pop an element and print it
    printf("Queue contents after pop: ");
    display();  // Display the queue after popping

    return 0;
}
