#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *prev;
};
struct node *top=NULL;
void push(int x){
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->prev=top;
	top=newnode;
}
int pop(){
	int x=-1;
	struct node *temp=top;
	x=top->data;
	
	top=top->prev;
	free(temp);
	return x;
}
void display(){
	struct node *tem=top;
	while(tem!=0){
		printf("%d\n",tem->data);
		tem=tem->prev;
	}
}
int main(){
	push(4);
	push(8);
	push(12);
	printf("x=%d\n",pop());
	push(16);
	display();
	return 0;
}
