#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    node *prev;
    int data;
    node *next;
    node(int val):data(val),prev(0),next(0){}
    
};
class doublylinkedlist{
    private :
    node *head,*tail;
    public:
    doublylinkedlist():head(0),tail(0){}
    void insertnode(int v){
        node *nd=new node(v);
        if(head==0&&tail==0){
            head=tail=nd;
            return ;
        }
        tail->next=nd;
        nd->prev=tail;
        tail=nd;
        
    }
    void insertindex(int position,int d){
    	node *nd=new node(d);
    	int i=0;
    	node *pre=head;
    	while(i<position-1){
    		pre=pre->next;
    		i++;
		}
		nd->next=pre->next;
		nd->prev=pre;
		pre->next->prev=nd;
		pre->next=nd;
	
		
	}
    void traverseforward(){
        node *temp=head;
        while(temp!=0){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void traversebackward(){
    	node *temp=tail;
    	while(temp!=0){
    		cout<<temp->data<<"->";
    		temp=temp->prev;
		}
		cout<<"NULL"<<endl;
	}
};
int main() {
    doublylinkedlist *dll=new doublylinkedlist();
    int  choice;
    do{
        cout<<"Enter the choice 1 for insertion || 2 for forward traversal || 3 for backward traversal: || 4 for insert at position : ";
        cin>>choice;
        if(choice==1){
            int d;
            cout<<"Enter the data you want add";
            cin>>d;
            dll->insertnode(d);
        }
        else if(choice==2){
            dll->traverseforward();
        }
        else if(choice==3){
        	dll->traversebackward();
		}
		else if(choice==4){
			int pos;
			cout<<"Enter the poistion u want add: ";
			cin>>pos;
			int d;
			cout<<"Enter the data u want add: ";
			cin>>d;
			dll->insertindex(pos,d);
			
		}
        else {
            cout<<"Enter the correct choice"<<endl;
        }
        
    }while(choice!=0);
    
    
 }
