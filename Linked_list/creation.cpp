#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
};
node *head=NULL;
void create(){
	node *nd=new node();
	int x;
	cout<<"Enter the data: ";
	cin>>x;
	nd->data=x;
	nd->next=0;
	
}
int main(){
	
}
