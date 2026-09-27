#include<stdio.h>
#define MAX 5

int main(){
    int queue[MAX];
    int rear=-1;
    int front=-1;

    rear=(rear+1)%MAX;
    queue[rear]=10;
    front=0;

    rear=(rear+1)%MAX;
    queue[rear]=20;

    rear=(rear+1)%MAX;
    queue[rear]=30;

    rear=(rear+1)%MAX;
    queue[rear]=40;

   
    front=(front+1)%MAX;
    front=(front+1)%MAX;

    rear=(rear+1)%MAX;
    queue[rear]=50;

    rear=(rear+1)%MAX;
    queue[rear]=60;

    printf("Final elements of queue after insertion and deletion: \n");
    int i=front;
    while(1){
        printf("%d ",queue[i]);

        if(i==rear)
            break;
        i=(i+1)%5;    
    }


}