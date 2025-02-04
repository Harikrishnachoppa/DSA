#include<stdio.h>
int search(int A[],int l,int h,int key){
	
	if(l<=h){
		int mid=(l+h)/2;
		if(key==A[mid]){
			return mid;
		}
		else if(key<A[mid]){
			search(A,l,mid-1,key);
		}
		else{
			search(A,mid+1,h,key);
		}
	}
	return -1;
	
}

void display(int a[],int s){
	for(int i=0;i<s;i++){
		printf("%d\t",a[i]);
	}
	
	
}
int main(){
	int size,length;
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Length of array: ");
	scanf("%d",&length);
	int key;
	printf("Enter the key: ");
	scanf("%d",&key);

	int A[length];
	printf("Enter the array elements: \n");
	int l=0;
	int h=length-1;
	
	for(int i=0;i<length;i++){
		scanf("%d",&A[i]);
	}
	if(search(A,l,h,key)!=-1){
		printf("The element found %d \n",search(A,l,h,key));
	}
	else{
		printf("The element is not found\n");
	}
	display(A,length);
	return 0;
			
}

