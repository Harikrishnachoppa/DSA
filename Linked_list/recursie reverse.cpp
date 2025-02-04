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
node *reverse(node *head){
	if(head==NULL||head->next==0){
		return head;
	}
	node *temp=head->next;
	head->next=0;
	node *newhead=reverse(temp);
	temp->next=head;
	return newhead;

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
head=reverse(head);
	traverse();
	return 0;
}
