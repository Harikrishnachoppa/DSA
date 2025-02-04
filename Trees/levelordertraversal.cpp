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
void level(node* root){
	if(root==NULL){
		cout<<"Tree is empty";
	}
	queue<node*>q;
	vector<int>v;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		v.push_back(temp->data);
		
		q.pop();
		if(temp->left!=0){
			q.push(temp->left);
		}
		if(temp->right!=0){
			q.push(temp->right);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}

int main(){
	head=create();
	level(head);
	return 0;
	
	
}
