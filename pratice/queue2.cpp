#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *rear=0;
struct node *head=0;
void enqueue(int x){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
//	printf("Enter the data: ");
//	scanf("%d",newnode->data);
     newnode->data=x;
	newnode->next=0;
	if(rear==0 && head==0){
		rear=head=newnode;
	}else{
		rear->next=newnode;
		rear=newnode;
	}
}
int dequeue(){
	int x=-1;
	if(rear==0 && head==0){
		printf("Empty");
	}
	else{
		struct node *t;
		x=head->data;
		t=head;
		head=head->next;
		free(t);
		
	}
	return x;
}
void display(){
	rear=head;
	if(rear==0&&head==0){
		printf("Queue is empty");
	}else{
		while(rear!=NULL){
			printf("%d\n",rear->data);
			rear=rear->next;
		}
	}
}
int main(){
	enqueue(5);
	enqueue(15);
	enqueue(25);
	enqueue(35);
     printf("Te deleted value is %d \n"	,dequeue());
	printf("The deleted value is %d \n",dequeue());

	display();
	return 0;
}
