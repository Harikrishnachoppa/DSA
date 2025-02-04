#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubblesort(int A[],int n){
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
				swap(&A[j],&A[j+1]);
				flag=1;
			}
		}
		if(flag==0){
			break;
		}
	}
}

int main(){
	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int A[size];
	for(int i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	bubblesort(A,size);
	for(int i=0;i<size;i++){
		printf("%d\t",A[i]);
	}
	
}
