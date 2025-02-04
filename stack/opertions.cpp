#include <stdio.h>
#include <conio.h>  // Include conio.h for getch()

#define N 5  // Remove semicolon

int stack[N];  // Fix typo: statck to stack
int top = -1;

void push() {
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    if (top == N - 1) {
        printf("Overflow condition");
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    int item;  // Fix variable name: delete_item to item
    if (top == -1) {
        printf("Underflow condition");
    } else {
        item = stack[top];
        top--;
    }
}

void peek() {
    int top_element;
    if (top == -1) {
        printf("Stack is empty");
    } else {
        top_element = stack[top];
        printf("Top element: %d\n", top_element);
    }
}

void display() {
    int i = top;
    while (i != -1) {
        printf("%d\t", stack[i]);
        i--;
    }
}

int main() {
    int choice;
    do {
        printf("\nEnter choice: 1: push, 2: pop, 3: peek, 4: display, 0: exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                break;  // Added break statement for the exit case
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    getch();  // Use getch() to pause the console
    return 0;
}

