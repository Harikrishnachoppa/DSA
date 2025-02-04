#include<stdio.h>
#include<stdlib.h>
void binary(int beg,int end,int key,int A[]){
		if(beg<=end){
			int mid=(beg+end)/2;
			if(key==A[mid]){
				printf("The element found at index no %d",mid);
				return;
			}
			else if(key>A[mid]){
				binary(mid+1,end,key,A);
			}
			else{
				binary(beg,mid-1,key,A);
			}
		}else{
		
		printf("The element is not found in this array.");
	}
	}

int main(){
	int size;
	printf("Enter the size of array");
	scanf("%d",&size);
	int key;
	printf("Enter the key element ");
	scanf("%d",&key);
	int beg=0;
	int end=size-1;
	int A[size];
	for(int i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	binary(beg,end,key,A);
	return 0;
}
	
