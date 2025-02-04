#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=0;
	int count=0;
void create(){

	node *nd=new node();
	cout<<"ENter the data: ";
	cin>>nd->data;
	nd->next=0;
	if(head==0){
		head=nd;
	}else{
		node *temp=head;
		while(temp->next!=0){
			temp=temp->next;
		}
		temp->next=nd;
	}
	count++;
	
}
void insert(){
	node *nd=new node();
	cout<<"ENter the data: ";
	cin>>nd->data;
	nd->next=head;
	head=nd;
	
	
}
void posi(int pos){
	if(pos<1||pos>count+1){
		cout<<"Invalid position"<<endl;
		return;
	}
	node *nd=new node();
	cout<<"ENter the data: ";
	cin>>nd->data;
	if(pos==1){
		nd->next=head;
		head=nd;
	}else{
	
	int i=1;
	node *hk=head;
	while(i<pos-1){
		hk=hk->next;
		i++;
	}


	nd->next=hk->next;
	hk->next=nd;
}
count++;
	
	
	
}
node* reverse(node *head){
	if(head==0||head->next==0){
		return head;
	}
	else{
		node *temp=head->next;
		head->next=0;
		node *newhead=reverse(temp);
		temp->next=head;
		return newhead;
	}
	
}
node *ireverse(){
	node *nex;
	node *prev=0;
	node *temp=head;
	while(temp!=0){
		nex=temp->next;
		temp->next=prev;
		prev=temp;
		temp=nex;
		
	}
	head=prev;

	
}
node *kfun(node *temp,int k){
	k-=1;
	while(temp!=0&&k>0){
		temp=temp->next;
		k--;
	}
	return temp;
}
node *reversek(node *head,int k){
	node* temp=head;
	node *prevlast=0;
	while(temp!=0){
		node *kthnode=kfun(temp,k);
		if(kthnode==0){
			if(prevlast){
				prevlast->next=temp;
				break;
			}
		}
		node *next=kthnode->next;
		kthnode->next=0;
		reverse(temp);
		if(temp==head){
			head=kthnode;
		}
		else{
			prevlast->next=kthnode;
		}
		prevlast=temp;
		temp=next;
		
	}
	return head;
}

void display(){
	node *t=head;
	while(t!=0){
		cout<<t->data<<" \t"<<endl;
		t=t->next;
	}
}
int main(){
	int c;
	int p;
	do{
	
	cout<<"enter the choice 1 for create,2 for display,3 for insertoon : ";
	cin>>c;
	
	if(c==1){
		create();
	}
	else if(c==2){
		display();
	}
	else if(c==3){
	
		cout<<"Enter the position u want to add: ";
		cin>>p;
		posi(p);
		
	}
	else if(c==4){
		head=reverse(head);
	}
	else if(c==5){
		head=reversek(head,3);
	}
	else{
		break;
	}
    }while(true);
return 0; 
}
