#include <stdio.h>
#define STACK_SIZE 5

char stack[STACK_SIZE];
int top = 0;
int bottom = 0;



void push (char StringValue);
void display();
void stringReverse ();

int main() {
    push('h');
    push('e');
    push('l');
    push('l');
    push('o');
    display();
    stringReverse ();

    return 0;
}

void stringReverse (){
    if(top == 0 && bottom == 0){
        printf("No elements to Print");
    }else{
        printf("------");
        printf("\ntop element index value is %d", top);
        printf("\nbottom element index value is %d", bottom);
        for(int i =bottom; i >= top-1; i--){
            printf("\n%c", stack[i]);
        }
    }
}


void push (char StringValue){
    if(top == 0 && bottom == 0){
        stack[bottom] = StringValue;
        top++;
        bottom++;
    }else{
        stack[bottom] = StringValue;
        bottom++;
    }
}

void display(){
    if(top == 0 && bottom == 0){
        printf("No elements to Print");
    }else{
        for(int i =0; i < bottom; i++){
            printf("\n%c", stack[i]);
        }
    }
}