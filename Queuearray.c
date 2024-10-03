#include<stdio.h>
#include<stdlib.h>

#define MAX 5  // Maximum size of the queue

int queue[MAX];
int FRONT = -1, REAR = -1;

// Function to check if the queue is full
int isFull() {
    return (FRONT == (REAR + 1) % MAX);
}

// Function to check if the queue is empty
int isEmpty() {
    return (FRONT == -1);
}

// Function to insert (enqueue) an element into the queue
void push(int item) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (FRONT == -1) {
        FRONT = 0;  // Set front to 0 if inserting the first element
    }
    REAR = (REAR + 1) % MAX;  // Circular increment of rear
    queue[REAR] = item;
    printf("Inserted %d\n", item);
}

// Function to remove (dequeue) an element from the queue
int pop() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = queue[FRONT];
    if (FRONT == REAR) {
        // If only one element was present, reset the queue
        FRONT = -1;
        REAR = -1;
    } else {
        FRONT = (FRONT + 1) % MAX;  // Circular increment of front
    }
    return item;
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents: ");
    int i = FRONT;
    while (1) {
        printf("%d ", queue[i]);
        if (i == REAR)
            break;
        i = (i + 1) % MAX;  // Circular increment
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);  // Queue is full now

    display();  // Display queue

    printf("Popped item: %d\n", pop());
    printf("Popped item: %d\n", pop());

    display();  // Display queue after popping 2 items

    push(60);  // Inserting into the circular queue
    display();  // Display queue

    return 0;
}
