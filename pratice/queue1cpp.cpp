#include<stdio.h>
#include<stdlib.h>

struct node{
	int size;
	int rear;
	int head;
	int *h;
};

void create(struct node *p){
	printf("Enter the size of queue: ");
	scanf("%d", &p->size);
	p->h = (int *)malloc(p->size * sizeof(int));
	p->rear = p->head = -1;
}

void enqueue(struct node *p, int x){
	if(p->rear == -1 && p->head == -1){
		p->head = p->rear = 0;
		p->h[p->rear] = x;
	}
	else{
		p->rear++;
		p->h[p->rear] = x;
	}
}

int dequeue(struct node *p){
	int x = -1;
	if(p->head == -1 && p->rear == -1){
		printf("Queue is empty\n");
	}
	else if(p->head == p->rear){
		x = p->h[p->rear];
		p->head = p->rear = -1;
	}
	else{
		x = p->h[p->head];
		p->head++;
	}
	return x;
}

void display(struct node p){
	for(int i = p.head; i <= p.rear; i++){
		printf("\n%d\n", p.h[i]);
	}
}

int main(){
	struct node p;
	create(&p);
	enqueue(&p, 5);
	enqueue(&p, 15);
	enqueue(&p, 25);
	enqueue(&p, 35);
	printf("The deleted element is %d",dequeue(&p));
	display(p);
	return 0;
}

