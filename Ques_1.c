#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int value){
    if(rear==MAX-1){
        printf("Queue overflow!");
    }
    if(front==-1){
        front=0;
    }
    rear++;
    queue[rear]=value;
    printf("Inserted value: %d\n",value);
}

void dequeue(){
    if(front==-1||front>rear){
        printf("Queue underflow!");
    }
    printf("Deleted element: %d\n",queue[front]);
    front++;
}

void display(){
    if(front==-1||front>rear){
        printf("Queue is empty!");
    }
    printf("Queue elements: \n");

    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    enqueue(40);
    
    display();
}

