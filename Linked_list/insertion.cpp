#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
int count = 0;

void create() {
    int choice = 1;
    struct node *newnode, *temp;
    while(choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the elements: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter 1 to continue adding elements, or 0 to stop: ");
        scanf("%d", &choice);
        count++;
    }
}
void insert(){
	  
}

void display() {
    struct node *hk = head;
    while(hk != NULL) {
        printf("%d\t", hk->data);
        hk = hk->next;
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\nEnter your choice: \n1. Create\n2. Display\n0. Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 0); // Loop continues until user enters 0 to exit

    return 0;
}

