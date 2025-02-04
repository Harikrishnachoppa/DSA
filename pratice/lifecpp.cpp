#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *newnode;
struct node *head=NULL;
	
void create(){
struct node *temp;
	int choice=1;
	while(choice){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		head=temp=newnode;
	}else{
	
	temp->next=newnode;
	temp=newnode;
}
printf("Enter the choice : ");
scanf("%d",&choice);

}
	
}
void insert(){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the elements: ");
    scanf("%d",&newnode->data);
    struct node *t;
    t=head;
    while(t!=0){
    	t=t->next;
	}
	newnode->next=0;
	t->next=newnode;
   
    
	
}
void display(){
	struct node *tem;
	tem=head;
	while(tem!=0){
		printf("%d\t",tem->data);
		tem=tem->next;
	}
}
int main(){
	create();
	insert();
	display();
	return 0;
}
	
