#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * back;
};

struct node* createlinkedList(struct node* head){
    struct node* temp =head, *newnode = NULL;
    int choice =1;
    while(choice){
        newnode = malloc(sizeof(struct node));
        if(newnode == NULL){
            printf("Error on data allocation");
        }
        
        printf("Value For Node? ");
        scanf("%d",&newnode->data);
        
        if(head == NULL){
          temp=  head = newnode;
            newnode ->back = NULL;
            newnode ->next = NULL;
        }else{
           
            temp->next = newnode;
            newnode->back = temp;
             newnode -> next = NULL;
            temp =newnode;
        }
        printf("Want to stop (0)?");
        scanf("%d", &choice);
    }
    return head;
}

void displayValues(struct node* head){
    struct node* temp = head;
    if(head != NULL){
        while(temp != NULL){
            printf("%d", temp->data);
            printf("\n");
            temp = temp->next;
        }
    }else{
        printf("No linked list here!");
    }
}


int main(){
    struct node * head = NULL;
    head = createlinkedList(head);
    displayValues(head);
    return 0;
}