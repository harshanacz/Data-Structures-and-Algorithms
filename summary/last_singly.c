#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createLinkList(struct node *head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    head = newnode;
    printf("Enter Value for node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return head;
}

struct node *addFrontItem(struct node *head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value for New Front node: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
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
struct node *removeItemFromStart(struct node *head)
{
    struct node *temp;
    head = head->next;
    return head;
}
struct node *removePositionIndex(struct node *head)
{
    struct node *temp = head, *privousNode;
    int choice, i = 0;
    printf("Which Position You want to remove?");
    scanf("%d", &choice);
    while (i < choice - 1)
    {
        privousNode = temp;
        temp = temp->next;
        i++;
    }
    privousNode->next = temp->next;
    free(temp);
    return head;
}
void lengthof(struct node *head)
{
    struct node *temp = head;
    int length = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        length++;
    }
    printf("%d", length);
}
struct node *removeItemFromEnd(struct node *head)
{
    struct node *temp, *privousNode;
    temp = privousNode = head;
    while (temp->next != NULL)
    {
        privousNode = temp;
        temp = temp->next;
    }
    privousNode->next = NULL;

    free(temp);
    return head;
}
void displayItems(struct node *head)
{
    struct node *temp = head;
    if (head != NULL)
    {
        while (temp != NULL)
        {
            printf("%d", temp->data);
            printf("\n");
            temp = temp->next;
        }
    }
    else
    {
        printf("No items");
    }
}

int main()
{
    struct node *head;
    displayItems(head);

    head = createLinkList(head);
    printf("\n");
    displayItems(head);
    printf("Working");
    printf("\n");
    head = addFrontItem(head);
    printf("\n");
    displayItems(head);
    printf("\n");
    head = addFrontItem(head);
    printf("\n");
    displayItems(head);
    return 0;
}