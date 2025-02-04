#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *newnode,*head=0,*temp;
void create(){
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("Enter the choice: ");
        scanf("%d",&choice);
        
    }
}
void insert(){
   newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL; 
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
}
void insertend(){
      newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for node: ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
}
void insertposition(){
      newnode=(struct node*)malloc(sizeof(struct node));
     int position;
     printf("Enter the position : ");
     scanf("%d",&position);
        printf("Enter the data for node: ");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
    int i=1;
    temp=head;
    while(i<position-1){
        temp=temp->next;
        i++;
        
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
void delete1(){
	temp=head;
	head=temp->next;
	head->prev=0;
	free(temp);
}
void deleteend(){
	struct node *hk;
	hk=temp;
	temp->prev->next=0;
	temp=temp->prev;
	free(hk);
}
void deletepos(){
	temp=head;
	int i=1;
	int position;
	printf("Enter the which position u want delete: ");
	scanf("%d",&position);
	while(i<position){
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
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
   // display();
   // printf("\n");
   deletepos();
    display();
    return 0;
}
