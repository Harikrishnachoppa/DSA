#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root=NULL;
void insert(int key){
	struct node *tail,*prev,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->left=newnode->right=NULL;
	if(root==NULL){
		root=newnode;
	}
	tail=root;
	while(tail!=NULL){
		prev=tail;
		if(key<tail->data){
			tail=tail->left;
		}
		else if (key>tail->data){
			tail=tail->right;
		}
		else {
			return ;
		}
	}
		newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->left=newnode->right=NULL;
	if(key<prev->data){
		prev->left=newnode;
	}
	else{
		prev->right=newnode;
	}
}
void inorder(struct node *root){
	if(root==NULL){
		return ;
	}
	else{
		inorder(root->left);
		printf("%d \n",root->data);
		inorder(root->right);
	}
}
struct node* search(int key){
	struct node *temp=root;
	while(temp!=0){
		if(key==temp->data){
			return temp;
		}
		else if(key<temp->data){
			temp=temp->left;
		}
		else{
			temp=temp->right;
		}
	}
}
int  main(){
	insert(10);
	insert(15);
	insert(5);
	insert(3);
	insert(45);
	inorder(root);
	struct node *k;
	k=search(3);
	if(k==0){
		printf("The element is not found");
	}
	else{
		printf("The element  %d is found \n",k->data);
	}
	
}


