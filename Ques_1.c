#include <stdio.h>
#include <stdlib.h>

#define MAX 5   // maximum size of the queue

int queue[MAX];
int front = -1;
int rear = -1;

// Insert an element at the rear of the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) {
        front = 0;  // first element being inserted
    }
    rear++;
    queue[rear] = value;
    printf("Inserted %d into the queue.\n", value);
}

// Delete an element from the front of the queue
void dequeue(void) {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot delete, queue is empty.\n");
        return;
    }
    printf("Deleted %d from the queue.\n", queue[front]);
    front++;

    // Reset queue to empty state if all elements are removed
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

// Display the current elements in the queue
void display(void) {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(void) {
    // 1. Insert 10, 20, and 30 into the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    // 2. Delete two elements from the front
    dequeue();
    dequeue();
    display();

    // 3. Insert 40 into the rear
    enqueue(40);

    // 4. Display the remaining elements
    display();

    return 0;
}