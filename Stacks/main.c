#include <stdio.h>

//Let's create simple stack 😊

#define N 5

int stack[N];
int top  = -1;

void push(int value);
void displayElements();

int main() {
    printf("Add values to Stack. MAX: 5\n");
    int valueAdded = 1;
    int x;
    while(valueAdded == 1){

        printf("\nEnter Value You want to add: ");
        scanf("%d", &x);

        push(x);
        printf("\nWant to finish?[1/0]");
        scanf("%d", &valueAdded);

    }
    displayElements();


    return 0;
}

void push(int value){
    if(top==N-1){
        printf("Overflow the Data");
    }else{
        top++;
        stack[top]=value;
    }
}

void displayElements(){
    printf("Let's display the data you stored.\n");
    int i;
    for(i=top; i >=0; i--){
        printf("%d", stack[i]);
        printf("\n");
    }
}