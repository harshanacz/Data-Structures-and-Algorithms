// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * push(struct node *top){
    struct node *newnode;
    int data;
    printf("Give me value: ");
    scanf("%d",&data);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next=top;
    newnode->data=data;
    top =newnode;
    return top;
    
}
struct node * pop(struct node *top){
    if(top == 0){
      printf("EMPTY STACK");
      printf("\n");
  }else{
      printf("%d",top->data);  printf("\n");
      int choice;
      printf("Do you want remove it? (1|0)");
      scanf("%d", &choice);
      if(choice){
          top=top->next;
      }
      
  }
  return top;
}

void printStack(struct node *top){
    struct node *temp =top;
  if(top == 0){
      printf("EMPTY STACK");
      printf("\n");
  }else{
       printf("GOING TO Print");
      printf("\n");
      while(temp != 0){
          printf("%d", temp->data);  printf("\n");
          temp = temp->next;
      }
  }
}



int main() {
    struct node *top=0;
    printStack(top);
    top = push(top); top = push(top);
    printStack(top);
     top = pop(top); printStack(top); top = push(top); top = push(top);printStack(top);

    return 0;
}