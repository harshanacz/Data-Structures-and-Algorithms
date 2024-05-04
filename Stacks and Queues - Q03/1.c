#include <stdio.h>

#define STACK_SIZE 6

int binary[STACK_SIZE];
int top = -1;

int isEmpty();
int isFull();
void pushItem(int value);
int popItem();

int main() {
    int decimal;

    //THIS SUPPORT ONLY UPTO 63 decimal value @

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        int remainder = decimal % 2;
        pushItem(remainder);
        decimal /= 2;
    }

    printf("Binary representation: ");
    while (!isEmpty()) {
        printf("%d", popItem());
    }
    printf("\n");

    return 0;
}

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == STACK_SIZE - 1;
}

void pushItem(int value) {
    if (!isFull()) {
        binary[++top] = value;
    } else {
        printf("Stack overflow!\n");
    }
}

int popItem() {
    if (!isEmpty()) {
        return binary[top--];
    } else {
        printf("Stack underflow!\n");
        return -1;
    }
}
