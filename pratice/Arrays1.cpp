#include<stdio.h>
#include<stdlib.h>
struct Array {
	int size;
	int *p;
	int length;
};
void insert(struct Array *b, int x, int y) {
    for(int i = b->length; i >= x; i--) {
        b->p[i] = b->p[i - 1];
    }
    b->p[x - 1] = y;
    b->length++;
}
void insert1(struct Array *b,int y){
	for(int i=b->length;i>=0;i--){
		b->p[i]=b->p[i-1];
	}
	b->p[0]=y;
	b->length++;
}
void display(struct Array a){
	printf("Display the array elements: ");
	for(int i=0;i<a.length;i++){
		printf("%d\t",a.p[i]);
	}
}
int main(){
	struct Array arr;
	printf("Enter the size of array : ");
	scanf("%d",&arr.size);
	int n;
	printf("Enter the number elements you want : ");
	scanf("%d",&n);
	arr.p=(int *)malloc(arr.size*sizeof(int));
	printf("Enter the  array elements: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr.p[i]);
	}
	arr.length=n;
	int position;
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	//printf("Enter the which position u want add : ");
	//scanf("%d",&position);
//	insert(&arr,position,number);
	insert1(&arr,number);
	display(arr);
	return 0;
	
}
