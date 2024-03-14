#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top =-1;
int checkBalancedorNot(char* StringValue);
void push(char StringItem);
void displayItems();


int main() {
    char expression[MAX];
    int isBalanced;
    printf("Give the Expression: ");
    gets(expression);
    checkBalancedorNot(expression);

    return 0;
}


int checkBalancedorNot(char* StringValue){
    for(int i =0; i< strlen(StringValue); i++){
        if(StringValue[i] == '(' || StringValue[i] == '{' || StringValue[i] == '['){

            push(StringValue[i]);
        }
    }
    displayItems();
}


void push(char StringItem){

    if(top == MAX-1){
        printf("Filled");

    }else{
        printf("\nOne item added!");
        top++;
        stack[top]= StringItem;
    }
}


void displayItems(){
    if(top==0){
        printf("No VALUES");
    }else{

        for(int i =0; i<=top; i++){
            printf("\n%c", stack[i]);
        }
    }
}


