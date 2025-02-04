#include<iostream>
#include<string.h>
using namespace std;
struct contact{
	int number;
	string name;
	contact *next;
};
contact *head=NULL;
void insert_beg(string name,int no){
	contact *nd=new contact();
	nd->name=name;
	nd->number=no;
	if(head==NULL){
			nd->next=NULL;

		head=nd;
	}
	else{
		nd->next=head;
		head=nd;
	}
}
void traverse(){
	contact* temp=head;
	while(temp!=NULL){
		cout<<temp->name<<temp->number<<endl;
		temp=temp->next;
	}
}
contact* middle(){
	contact *fast=head;
	contact *slow=head;
	while(fast!=0 && fast->next!=0){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
int main(){
	int n,input;
	string name;
	do{
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the number";
		cin>>n;
		cout<<"Enter the non zero no for continue and 0 for exit";
		insert_beg(name,n);
		cin>>input;
		
	}
	while(input!=0);
	cout<<"\n\n***contact list***\n\n";
	traverse();
	contact *hk=middle();
	cout<<hk->name;
	return 0;
}
