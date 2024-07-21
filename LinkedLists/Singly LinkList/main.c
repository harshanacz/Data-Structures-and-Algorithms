#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *header = NULL, *temp = NULL, *newnode;
    int choice = 1;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Data? ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (header == NULL) {
            temp = header = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Continue? (0 to stop, 1 to continue): ");
        scanf("%d", &choice);
    }

    //print the linked list to verify
    temp = header;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free the allocated memory
    while (header != NULL) {
        temp = header;
        header = header->next;
        free(temp);
    }

    return 0;
}
