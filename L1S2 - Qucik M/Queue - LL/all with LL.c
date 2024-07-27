
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0, *back = 0;

void enqueue()
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("Give me value: ");
    int value;
    scanf("%d", &value);
    newnode->data = value;
    if (front == 0 && back == 0)
    {
        front = back = newnode;
    }
    else
    {
        back->next = newnode;
        back = newnode;
    }
}

void display()
{
    struct node *temp = front;
    if (temp == 0 && back == 0)
    {
        printf("Nothing to print!");
        printf("\n");
    }
    else if (temp == back)
    {
        printf("%d", temp->data);
        printf("\n");
    }
    else
    {
        while (temp->next != NULL)
        {
            printf("%d", temp->data);
            printf("\n");
            temp = temp->next;
        }
        printf("%d", temp->data);
        printf("\n");
    }
}

void dequeue()
{
    struct node *temp = front;
    int choice;
    if (temp == 0 && back == 0)
    {
        printf("Nothing to remove or print!");
        printf("\n");
    }
    else
    {
        printf("%d", temp->data);
        printf("\n");
        printf("Do you want to remove it? 1 | 0");
        scanf("%d", &choice);
        if (choice)
        {
            front = front->next;
            free(temp);
        }
    }
}

int main()
{
    display();
    enqueue();
    display();
    enqueue();
    display();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}