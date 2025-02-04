#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev,*next;
	int data;
};
struct node *head=NULL;
void create(){
	int choice=1;
	printf("Enter the choice: ");
	scanf("%d",&choice);
	while(choice){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	if(newnode==NULL){
		printf("Memory allocation failled");
		
	}
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	printf("Enter u r choice");
	scanf("%d",&choice);
}
}
void display(){
	struct node *temp=head;
	while(temp!=0){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

int main(){
	/*int choice;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	while(true){
		switch(choice){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 0:
				return 0;
			default:
			    printf("Invalid choice");	
				
				
		}
	}*/
	create();
	display();
	return 0;
}
