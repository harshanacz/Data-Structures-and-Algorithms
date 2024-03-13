#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
};

struct node * front =0;
struct node * back=0;
void enqueue(int value);
void display();
void dequeue();
int main() {
    enqueue(10);
    enqueue(20);  enqueue(30);  enqueue(40);
    display();
    dequeue();dequeue();
    printf("Going to new display\n");
    display();
    return 0;
}

void dequeue(){
    if(front ==0 && back==0){
        printf("No elements to display");
    }else{
        struct node * temp;
        temp = front;
        front = temp->link;
        free(temp);
    };


}

void display(){if(front ==0 && back==0){
        printf("No elements to display");
    }else{
        struct node * temp;
        temp = front;
        while(temp !=0){
            printf("%d\n", temp ->data);
            temp = temp -> link;
        }
}

}

void enqueue(int value){
    struct node * newnode;
    newnode = malloc(sizeof (struct node));

    newnode -> data = value;
    newnode -> link = 0;


    if(front ==0 && back==0){
        front = back = newnode;
    }else{
        back->link = newnode;
        back = newnode;
    }
}



