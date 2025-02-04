#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct contact{
	string name;
	int number;
	contact *next;
	
};
contact *head=NULL;
void insert_beg(string name,int number){
	contact *nd=new contact();
	nd->name=name;
	nd->number=number;
	if(head==NULL){
		nd->next=NULL;
		head=nd;
	}
	else{
		nd->next=head;
		head=nd;
	}
}
void insert_end(string name,int number){
	contact *nd=new contact();
	nd->name=name;
	nd->number=number;
	if(head==NULL){
		nd->next=NULL;
		head=nd;
	}
	else{
	contact *temp=head;
	nd->next=0;
	while(temp->next!=0){
		temp=temp->next;
		
	}
	temp->next=nd;
	
}
}

		

void traverse(){
	contact *p=head;
	while(p!=0){
		cout<<p->name<<" \t"<<p->number<<endl;
		p=p->next;
	}
}
int main(){
	string name;
	int number,input;
	do{
		cout<<"Enter the name: ";
		cin>>name;
		cout<<"Enter the number: ";
		cin>>number;
		//insert_beg(name,number);
		insert_end(name,number);
        cout<<"Enter the non zero number for continue and 0 for exit ";
		cin>>input;
	}while(input!=0);
	cout<<"\n\n\t***CONTACTLIST***\n\n";
	traverse();
}

