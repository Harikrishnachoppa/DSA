#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
};
struct node *newnode,*head=NULL,*temp;
void create(){
	int choice=1;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data in node: ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==NULL){
			head=temp=newnode;
		}else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Enter the choice ");
		scanf("%d",&choice);
	}
}
void reverse(){
	struct node *prev=0,*current=head,*nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		current->next=prev;
		prev=current;
		current=nextnode;
	}
	head=prev;

	
}
void display(){
	temp=head;
	while(temp!=0){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main(){
	create();
	reverse();
	display();
	return 0;
}
