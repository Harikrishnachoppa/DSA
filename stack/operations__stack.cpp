#include<iostream>
#define N 5
using namespace std;
int top=-1;
int stack[N];
int peek(){
	if(top==-1){
		cout<<"stack is empty";
		return 0;
	}
	else{
		return stack[top];
	}
}
void push(int x){
	if(top==N-1){
		cout<<"Stack is full";
	}else{
		stack[++top]=x;
	}
}

void pop(){
	if(top==-1){
		cout<<"stack is empty";
	}
	else{
		cout<<"The deleted element is "<<stack[top--];
	}
}
int main(){
	int choice;
	int item;
	do{
		cout<<"\n1.push";
		cout<<"\n2.pop";
		cout<<"\n3.peek";

		cout<<"\n0.exit";
		cout<<"Enter the choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter the element: ";
				cin>>item;
				push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				int x=peek();
				cout<<"the peek element is "<<x;
				break;
				
				
		}
	}while(choice!=0);
	return 0;
	
}
