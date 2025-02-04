#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
void create(int x){
	node *nd=new node();
	node *temp;
	nd->data=x;
	nd->next=0;
    if(head==NULL){
		head=temp=nd;
	}else{
		temp->next=nd;
		temp=nd;
	}
}
void traverse(){
	node *temp=head;
	while(temp!=0){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
void reverse(){
	node *current,*next,*prev;
	current=next=head;
	prev=0;
	while(next!=0){
		next=next->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
int main(){
	int x,choice;
	do{
		cout<<"Enter the x value: ";
		cin>>x;
		create(x);
		cout<<"Enter the non zero number for continue and 0 for exit";
		cin>>choice;
		
	}while(choice!=0);
	traverse();
	cout<<"\n";
	cout<<"After the reversed: "<<endl;
	reverse();
	traverse();
	return 0;
}
