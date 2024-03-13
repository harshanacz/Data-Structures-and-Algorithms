#include <stdio.h>

int queue[5];
int front = -1;
int back = -1;
void enqueue(int value);
void dequeue();
void displayall();

int main() {
    enqueue(5);
    enqueue(5);
    displayall();
    enqueue(6);
    enqueue(8);
    displayall();
    dequeue();
    displayall();
    return 0;
}

void enqueue(int value){
    if(front == -1 && back == -1){
        front = back = 0;
        queue[back] = value;

    }
    else {
        back++;
        queue[back] = value;
    }
}

void dequeue(){
    if(front == -1 && back == -1){
        //no items
    }else if ( front == back){
        front = -1;
         back = -1;
    }else{
        front++;
    }
}

void displayall(){
    printf("\n\nGOING TO DISPLAY ALL\n\n");
    if(front == -1 && back == -1){
        //no items
    }else{
        for(int i = front; i <= back; i++){
            printf("%d\n",queue[i]);
        }
    }
}


