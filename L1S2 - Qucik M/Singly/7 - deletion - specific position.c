#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to create the linked list
struct node *createList()
{
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int choice = 1;

    while (choice)
    {
        newnode = malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1/0)? ");
        scanf("%d", &choice);
    }

    return head;
}

// Function to print the linked list
void printList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}


//Remember - head mean 1st node
struct node * removePositionIndex(struct node *head){
    struct node *temp = head,*privousNode;
    int choice,i = 0;
    printf("Which Position You want to remove?");
    scanf("%d", &choice);
    while(i<choice-1){
        privousNode = temp;
        temp = temp->next;
        i++;
    }
    privousNode->next = temp->next;
    free(temp);
    return head;
}




int main()
{
    struct node *head;

    head = createList();
    printf("\n");
    printList(head);
head = removePositionIndex(head);
    printf("Let's remove some index");
    printf("\n");
    printList(head);
    return 0;
}