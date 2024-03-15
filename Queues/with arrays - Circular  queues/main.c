#include <stdio.h>

#define N 5
int queue[N];
int front =-1;
int back = -1;

void enqueue(int value);
void dequeue(int value);
void display();

int main() {
    enqueue(20);
    return 0;
}

void enqueue(int value){
    if(front ==-1 && back ==-1){
        front = back =0;
        queue[back]=value;
    }else if ((back+1)%N == front){
        printf("OVERFLOW");
    }else{
        back = (back+1)%N;
        queue[back]=value;
    }
}
void dequeue(int value){
    if(front ==-1 && back ==-1){
        printf("No elements to print");
    }else if(front == back){
        front = back = -1;
    }else{
        front = (front +1)%N;

    }
}

void display(){
    int i = front;
    if(front ==-1 && back ==-1){
        printf("No elements to print");
    }else{
while (i != back){
    printf("%d",queue[i]);
    i=(i+1)%N;
}
    }
}