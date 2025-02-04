#include<stdio.h>
#include<stdlib.h>
struct Array{
	int *A,size,length;
	
};
void display(struct Array arr){
	for(int i=0;i<arr.length;i++){
		printf("%d",arr.A[i]);
	}
}
int main(){
	struct Array arr;
	int n,i;

	printf("Enter the size of array:");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	arr.length=0;
	printf("Enter the number of numbers");
	scanf("%d",&n);
	printf("Enter all the elements");
	for(int i=0;i<n;i++){
		scanf("%d",&arr.A[i]);
		
	}
	arr.length=n;
	display(arr);
	return 0;
	
	
}
