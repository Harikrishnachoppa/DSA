#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int *arr;
	int front;
	int tail;
};
void create(struct queue *arr){
	printf("Enter the size of queue: ");
	scanf("%d",&arr->size);
	arr->arr=(int *)malloc(arr->size*sizeof(int));
	arr->front=arr->tail=-1;
	
}
void enqueue(struct queue *arr,int x){
	if(arr->front==-1 && arr->tail==-1){
		arr->front=arr->tail=0;
		arr->arr[arr->tail]=x;
		
		
	}
	else{
		arr->tail++;
		arr->arr[arr->tail]=x;
	}
}
void display(struct queue arr){
	for(int i=arr.front;i<=arr.tail;i++){
		printf("%d\n",arr.arr[i]);
			}
}
int main(){
	struct queue obj;
	create(&obj);
	enqueue(&obj,5);
		enqueue(&obj,15);
			enqueue(&obj,25);
				enqueue(&obj,35);
				display(obj);
				return 0;
}
