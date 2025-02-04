#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *head=NULL;
node* create(){
	int x;
	cout<<"Enter the data (-1 for no node): ";
	cin>>x;
	node* newnode=new node();
	if(x==-1){
		return 0;
	}
	newnode->data=x;
	cout<<"Enter the left child for "<<x<<": "<<endl;
	newnode->left=create();
	cout<<"Enter the right child for"<<x<<": "<<endl;
	newnode->right=create();
	return newnode;
}
/*int levelorder(node *head){
	queue<node*>q;
	q.push(head);
				int max_Depth=-1;

	while(!q.empty()){
			int size=q.size();

		while(size>0){
			node *x=q.front();
		
		//cout<<x->data;
		q.pop();
		if(x->left!=0){
			q.push(x->left);
		}
		if(x->right!=0){
			q.push(x->right);
		}
		
		size--;
	}
	max_Depth++;
		
	}
	return max_Depth;

}*/
int depth(node *head){
	if(head==0){
		return 0;
	}
	int leftdepth=depth(head->left);
	int rightdepth=depth(head->right);
	 max(leftdepth,rightdepth);
}
void inorder(node *head){
	if(head==0){
		return ;
	}
	inorder(head->left);
	cout<<head->data;
	inorder(head->right);
}

int main(){
	head=create();
	cout<<"levelorder:   ";
	//int x=levelorder(head);
	//cout<<x;
	//cout<<endl<<"inorder: "<<x;
	//inorder(head);
	int x=depth(head);
	int x1=x-1;
	cout<<x1;
	return 0;
	
}
