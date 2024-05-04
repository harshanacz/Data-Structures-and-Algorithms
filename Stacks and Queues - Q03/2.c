#include <stdio.h>
//implement the stack using array

#define N 5

int stack[N];
int top = -1;
void pushitem();
int checkStackStatus();
void displayStack();
void deleteAitem();
int main() {

    //step 01
    int stackStatus = checkStackStatus();
    if(stackStatus){
        printf("Stack is NOT overflow\n");
    }else{
        printf("Stack is  overflow\n");
    }
    //step 02
    pushitem();
    //step 03
     stackStatus = checkStackStatus();

    if(stackStatus){
        printf("Stack is NOT overflow\n");
    }else{
        printf("Stack is  overflow\n");
    }
    //step 04
    pushitem();
    pushitem();
    //step 05
    displayStack();
    //step 06
     deleteAitem();
    //step 07
    displayStack();
    return 0;
}

void pushitem(){
    int userValue;
    printf("Enter value you want to enter:");
    scanf("%d", &userValue);
    int stackStatus = checkStackStatus();
    if(stackStatus){
        top++;
        stack[top]=userValue;
    }else{

    }

}

int checkStackStatus(){
    if(top == N-1){
        return 0;
       // printf("Stack is overflow");
    }else{
        return 1;
      //  printf("Stack is NOT overflow");
    }
}



void displayStack(){
    if(top != -1){
        printf("Stack elements: ");
        for(int i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }else{
        printf("No items to show\n");
    }
}


void deleteAitem(){
    if(top != -1){
        top--;
    }else{
        //NOT ITEMS TO DELETE
    }
}