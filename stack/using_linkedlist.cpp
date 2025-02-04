#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int x){
	struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("%d \t",newnode->data=x);
		newnode->next=top;
		top=newnode;
		
	}
	
void display(){
	struct node *temp=top;
	if(top==NULL){
		printf("Under flow condition");
	}
	else{
		while(temp!=0){
			printf("\n%d\n",temp->data);
			temp=temp->next;
			
		}
	}
}
int main(){
	push(3);
	push(6);
	push(9);
	push(12);
	display();
	return 0;
}
