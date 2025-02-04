#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
node *head=NULL;
node* create(){
	node* nd=new node();
	int data;
	cout<<"Enter the the non zero number for continue and 0 for exit: ";
	cin>>data;
	nd->left=0;
	nd->right=0;
	if(data==0){
		return 0;
	}
	nd->data=data;
	cout<<"Enter the left child for"<<data<<"\n";
	nd->left=create();
	cout<<"Enter the right child for"<<data<<"\n";
	nd->right=create();
	return nd;
	
}
int depth(node* root){
	int nooflevels=-1;
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
	int queuesize=q.size();
		while(queuesize>0){
			node* temp=q.front();
			q.pop();
			if(temp->left!=0){
				q.push(temp->left);
				
			}
			if(temp->right!=0){
				q.push(temp->right);
			}
			queuesize--;
		}
		nooflevels++;
	}
	return nooflevels;
}
int main(){
	head=create();
	int D=depth(head);
	cout<<"The depth of the tree is: "<<D;
	return 0;
	
	
}
