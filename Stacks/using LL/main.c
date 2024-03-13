#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * link;
};

struct node * top = 0;

void push (int value);
void pop ();
void displayAll ();

int main() {
    push(50);
    push(70);
    printf("\n");
    displayAll();
    printf("\n");
    push(50);
    push(70);
    pop();
    displayAll();
    return 0;
}

void push (int value){
    struct node * newnode;
    newnode = malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> link = top;
    top = newnode;}

void pop (){
    if(top == 0){
        printf("No elements here!");
    }else{
        struct node * temp;
        temp = top;
        top = temp -> link;
        free(temp);
    }
}


void displayAll (){
    if(top == 0){
        printf("No elements here!");
    }else{
        struct node * temp;
        temp = top;
        while ( temp != 0){
            printf("%d\n", temp-> data);
            temp = temp -> link;
        }
        printf("The End");
    }
}