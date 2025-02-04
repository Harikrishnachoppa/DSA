// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
    node *head=NULL;


node *create(){
    node *nd=new node();
    int x;
    cout<<"Enter the data || -1 no node ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    nd->data=x;
    cout<<"Enter the left chilld for"<<x<<endl;
    nd->left=create();
    cout<<"Enter the right child for"<<x<<endl;
    nd->right=create();
    return nd;
}
void preorder(node *hk){
    if(hk==NULL){
        return ;
    }
    cout<<hk->data<<" ";
    preorder(hk->left);
    preorder(hk->right);
}
void inorder(node *hk){
    if(hk==NULL){
        return ;
    }
    inorder(hk->left);
    cout<<hk->data<<" ";
    inorder(hk->right);
}
void postorder(node *hk){
    if(hk==NULL){
        return ;
    }
    postorder(hk->left);
    postorder(hk->right);
    cout<<hk->data<<" ";

}
int path=INT_MIN;
int depth(node *root){
	if(root==0)return 0;
	int ld=max(0,depth(root->left));
	int rd=max(0,depth(root->right));
	path=max(path,ld+rd+root->data);
	return max(ld,rd)+root->data;
}
int maxpathsum(node *hk){
	depth(hk);
	return path;
	
}



int main() {
    int choice;
    do{
        cout<<"Enter the choice:  1 for create|| 2 for prefix ||3 for infix|| 4 for postfix || 5 for path sum : ";
        cin>>choice;
        if(choice==1){
            head=create();
            cout<<endl;
        }
        else if(choice==2){
            preorder(head);
            cout<<endl;
            
        }
        else if(choice==3){
            inorder(head);
            cout<<endl;
            
        }
        else if(choice==4){
            postorder(head);
            cout<<endl;
            
        }
        else if(choice==5){
        	cout<<"MAXIMUM PATH SUM: "<<maxpathsum(head)<<endl;
		}
        else{
            cout<<"INVALID CHOICE";
            break;
        }
    }while(true);
   

    return 0;
}
