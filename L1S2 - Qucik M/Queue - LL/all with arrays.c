
#include <stdio.h>
#define n 5
int queue[n];
int front =-1,rear = -1;

void enque(){
    int data;
    printf("Enter value: ");
    scanf("%d", &data);
    
    if(rear == n-1){
        printf("Queue is FULL.");
    }else if(rear == -1 && front == -1){
        front = rear = 0;
        queue[rear]= data;printf("First DATA");
           printf("\n");
    }else{
        rear++;
        queue[rear]=data;printf("2nd DATA");
           printf("\n");
    }

}

void deque(){
    if(front == -1 && rear == -1){
        printf("EMPTY..");
}else if(front == rear){
    //1st item?
       printf("1st item?..");
    front = rear =-1;
}else{
    front++;
}
    
}

void display(){
    int temp = front;
    printf("GOING TO PRINT");        printf("\n");
    while(temp != rear){
        printf("%d", queue[temp]);
        printf("\n");
        temp++;
    } printf("%d", queue[temp]);
        printf("\n");
}

int main() {

    enque(); enque();
    display();deque(); display();

    return 0;
}