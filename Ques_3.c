#include<stdio.h>
#define MAX 5

int queue[MAX];
int front =-1;
int rear=-1;

int main(){
    front=rear=0;
    queue[front]=10;

    rear++;
    queue[rear]=20;

    front--;
    queue[front]=30;

    front++;
    rear--;

    
    printf("Remaining elements:%d ",queue[front]);
    




}