#include<stdio.h>
#include<stdlib.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow condition\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow condition\n");
    } else if (front == rear) {
        printf("%d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("%d\n", queue[front]);
        front++;
    }
}
void  peek(){
	if(front==-1 || front>rear){
		printf("Under flow condition\n");
	}
	else{
		printf("%d\n",queue[front]);
	}
	
}

void display() {
    int i = front;
    while (i != -1 && i <= rear) {
        printf("%d ", queue[i]);
        i++;
    }
    printf("\n");
}

int main() {
    enqueue(3);
    enqueue(6);
    enqueue(8);
    enqueue(7);
    peek();
    dequeue();
    peek();
    display();
    return 0;
}

