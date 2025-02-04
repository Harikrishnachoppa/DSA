#include<iostream>
using namespace std;
#define N 5
int queue[N];
int rear=-1;
int front=-1;
void enqueue(int x){
	if((front==0&&rear==N-1)|| (front==rear+1)){
		cout<<"The queue is full";
	}
	
	else if(front==-1){
		rear=0;
		front=0;
		queue[rear]=x;
	}
	else if(rear==N-1){
		rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}

	
	
}
void dequeue(){
	if(front==-1){
		cout<<"under flow condition";
	}else{
		cout<<"\n Deleted Element is: "<<queue[front];
	
	if(front==rear){
		rear=-1;
		front=-1;
	}
	else if(front==N-1){
		front=0;
		
	}
	else{
		front++;
	}
}
}
int main(){
	int choice;
	int item;
	do{
		cout<<"\n1.Enqueue";
		cout<<"\n2.Dequeue";
		cout<<"\n0.Exit";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\n Enter the input: ";
				cin>>item;
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			default:
				cout<<"\n\n\n oh!wrong choice....";
				break;
				
				
				
		}
	}
	while(choice!=0);
	
}
