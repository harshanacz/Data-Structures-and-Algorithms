#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

char stack[MAX];
int top =-1;
int checkMainFun(char* StringValue);
void push(char StringItem);
void displayItems();
char pop ();
bool isMatched(char match1, char match2);

int main() {
    char expression[MAX];
    int isBalanced;
    printf("Give the Expression: ");
    gets(expression);
    checkMainFun(expression);

    return 0;
}


int checkMainFun(char* StringValue){
    char temp;
    char theValue;
    bool isMatchedit;
    for(int i =0; i< strlen(StringValue); i++){
        theValue = StringValue[i];

        if(theValue == '(' || theValue == '{' || theValue == '['){

            push(theValue);
        }

        if(theValue == ')' || theValue == '}' || theValue == ']'){
            if(top==-1){
                printf("\nINCORRECT!!! Because only Right items");
                return 0;
            }else{
                temp = pop();
                isMatchedit =  isMatched(temp,theValue);
                if(isMatchedit == 0){
                    printf("\nINCORRECT!!! Because not matching each one. ");
                    return 0;
                }
//                printf("\n TEMP:  %c\n",temp);

            }
        }
    }
    if(top==-1){
        printf("\nCORRECT! BALANCED");
    }else{
        printf("\nINCORRECT!!! NOT BALANCED");
    }
//    displayItems();
}

bool isMatched(char match1, char match2){
    if(match1 == '(' && match2 == ')'){
        return 1;
    }else if( match1 == '{' && match2 == '}' ){
        return 1;
    }else if( match1 == '[' && match2 == ']' ){
        return 1;
    }else{
        return  0;
    }
}

char pop (){
    if(top == -1){
        printf("NO ELEMENTS!");
        return 'a';
    }else{
        char theTemp = stack[top];
        top--;
        return theTemp;
    }
}


void push(char StringItem){
    if(top == MAX-1){
        printf("Filled");
    }else{
//        printf("\nOne item added!\n");
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


