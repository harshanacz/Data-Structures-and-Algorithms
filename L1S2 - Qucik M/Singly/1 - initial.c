#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void main() {
    struct node * header,* temp,* newnode;
    header = 0;
    int choice = 1;
    while(choice){
        newnode = (struct node *) malloc (sizeof (struct node));
        printf("What is the data?");
        scanf("%d", &newnode->data);
        newnode -> next = 0;

        if(header == 0){
            //This is initial situtaion
            header = temp = newnode;
        }else{
            temp -> next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue? (1/0)");
        scanf("%d", &choice);
    }

    if(header != 0){ printf(
        temp = header;

        while(temp !=NULL){
            printf("%d", temp->data); printf("\n");
            temp = temp->next;
        }
    }else{
        printf("There is nothing to PRINT");
    }
}
