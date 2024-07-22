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

struct node *addItemwithPosition(struct node *head)
{
    struct node *temp, *newnode;
    temp = head;
    int choice, value, i = 1;
    printf("Which position you want?");
    scanf("%d", &choice);
    printf("What's the value?");
    scanf("%d", &value);
    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    while (i < choice - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

int main()
{
    struct node *head;

    head = createList();
    printf("\n");
    printList(head);
    printf("\n");
    head = addItemwithPosition(head);
    printf("\n");
    printList(head);
    return 0;
}
