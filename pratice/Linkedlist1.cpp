#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL; 
struct node *newnode, *temp;

void create() {
    int choice = 1;
    
    while(choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL; 
        
        if(head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    
        printf("Do you want to continue (1/0)? ");
        scanf("%d", &choice);
    }
}
void insert1(){
	 newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d", &newnode->data);
        newnode->next=head;
        head=newnode;
}
void insertend(){
	    newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL; 
        temp=head;
        while(temp->next!=0){
        	temp=temp->next;
		}
		temp->next=newnode;
	
}

void deleteEnd(){
	    struct node *prev;

	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	if(temp==head){
		head=0;
	}
	else{
		prev->next=0;

		
	}
free(temp);
}
void deletepos(){
	int i=1;
	temp=head;
	while(i<position){
		temp=temp->next;
		i++;
		
		
	}
}
void display() {
    temp = head;
    printf("The list is: ");
    while(temp != NULL) { 
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    create();
    //insert1();
    //insertend();
    deleteEnd();
    display();
    return 0;
}

