#include <stdio.h>
#include <stdlib.h>
struct node {
    char data;
    struct node * link;
};

struct node * top=0;

void push(char StringValue);
void display();
int main() {
    push('a');
    push('b');
    push('c');

    display();
    return 0;
}


void push(char StringValue){
    struct node * newnode;
    newnode = malloc(sizeof (struct node));
    newnode->data = StringValue;
    newnode->link = top;
    top = newnode;
}

void display(){
    struct node * temp;
    temp=top;
    if(temp==0){
        printf("No items to show");
    }else{
        while(temp != 0){
            printf("\n%c", temp->data);
            temp=temp->link;
        }
    }
}

void displayreverse(){
    
}



