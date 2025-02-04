#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node *head = NULL;

struct node* create(int x) {
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	if (newnode == NULL) {
		printf("Memory allocation failed\n");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void insertion(int position, int v) {
	if (position < 1) {
		printf("Invalid position\n");
		return;
	}
	struct node *temp = head;
	struct node *newnode = create(v);
	if (position == 1) {
		newnode->next = head;
		head = newnode;
		return;
	}
	for (int i = 1; i < position - 1 && temp != NULL; i++) {
		temp = temp->next;
	}
	if (temp == NULL) {
		printf("Position exceeds the length of the list\n");
		free(newnode);
		return;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void delete_node(int position) {
	if (position < 1) {
		printf("Invalid position\n");
		return;
	}
	if (head == NULL) {
		printf("List is empty, nothing to delete\n");
		return;
	}
	struct node *temp = head;
	if (position == 1) {
		head = head->next;
		free(temp);
		return;
	}
	for (int i = 1; i < position - 1 && temp != NULL; i++) {
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL) {
		printf("Position exceeds the length of the list\n");
		return;
	}
	struct node *nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
}

void display() {
	struct node *temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	int n, choice, value, position;
	printf("Enter the number of nodes you want: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("Enter your choice (1 for insert, 2 for delete): ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("Enter the value to insert: ");
				scanf("%d", &value);
				printf("Enter the position to insert: ");
				scanf("%d", &position);
				insertion(position, value);
				break;
			case 2:
				printf("Enter the position to delete: ");
				scanf("%d", &position);
				delete_node(position);
				break;
			default:
				printf("Invalid choice\n");
				break;
		}
	}
	printf("Displaying the elements: ");
	display();
	return 0;
}

