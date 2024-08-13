// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *back;
};
struct node *createDoublyLL(struct node *head)
{
    int choice = 1;
    while (choice)
    {
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Value for node: ");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            temp = head = newnode;
            newnode->next = NULL;
            newnode->back = NULL;
        }
        else
        {
            temp->next = newnode;
            newnode->back = temp;
            newnode->next = NULL;
            temp = newnode;
        }

        printf("Do you want to continue  1 | 0 :");
        scanf("%d", &choice);
    }

    return head;
}

struct node *addItemForFront(struct node *head)
{
    struct node *temp, *newnode;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value for **Front** node: ");
    scanf("%d", &newnode->data);
    head = newnode;
    newnode->next = temp;
    temp->back = newnode;
    return head;
}

struct node *addItemForEnd(struct node *head)
{
    struct node *temp, *newnode;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value for **END** node: ");
    scanf("%d", &newnode->data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->back = temp;
    newnode->next = NULL;
    return head;
}

void displayItem(struct node *head)
{
    struct node *temp = head;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    struct node *head;
    head = createDoublyLL(head);
    displayItem(head);
    head = addItemForFront(head);
    displayItem(head);
    head = addItemForEnd(head);
    displayItem(head);
    return 0;
}