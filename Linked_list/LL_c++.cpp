#include<iostream>
#include<string.h>
using namespace std;
struct node{
	int no;
	string name;
	node *next;
};
node *head=NULL;
void insert_beg(string name,int number){
	node *nd=new node();
	nd->name=name;
	nd->no=number;
	if(head==NULL){
		nd->next=NULL;
		head=nd;
	}
	else{
		nd->next=head;
		head=nd;
	}
}
void reverse(){
	node *prev,*ptr;
	prev=NULL;
	ptr=head;
	while(ptr!=0){
		ptr->next=prev;
		prev=ptr;
		ptr=ptr->next;
	}
}
void middle(){
	node *first,*second,*temp;
	first=second=temp=head;
	while(temp->next!=0&&second->next!=0){
		first=first->next;
		second=second->next->next;
		temp=temp->next;
	}
	cout<<first->name<<"\t"<<first->no<<endl;
}

void traverse(){
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->name<<temp->no<<endl;
		temp=temp->next;
	}
}
int main(){
	int n,input;
	string na;
	do{
	
	cout<<"ENter the name: ";
	cin>>na;
	cout<<"Enter the number: ";
	cin>>n;
	insert_beg(na,n);
	cout<<"Enter no zero numbers for continue and zero for exit";
	cin>>input;
}
while(input!=0);
traverse();
cout<<endl;
reverse();
traverse();
cout<<endl;
middle();
return 0;
	
}
