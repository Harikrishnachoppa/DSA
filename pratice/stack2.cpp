#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp,*newnode;
void push(int x){
	
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("over flow condition");
	}
	else{
		newnode->data=x;
		newnode->next=head;
		head=newnode;
	}
}
int  pop(){
	int x;
	if(head==NULL){
		printf("The list is empty");
	}
	else{
		temp=head;
		head=head->next;
		x=temp->data;
		free(temp);
	}
	return x;
}
int peek(int position){
	temp=head;
	for(int i=0;temp!=NULL&&i<position-1;i++){
		temp=temp->next;
		
	}
	if(temp!=NULL){
		return temp->data;
		
	}
	return -1;
}

void display(){
	temp=head;
	while(temp!=0){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main(){
	push(2);
	push(4);
	push(6);
	//printf("The pop element is %d \n",pop());
	printf("The peek element is %d \n ",peek(2));
		display();
	return 0;
}
