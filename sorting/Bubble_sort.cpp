#include<stdio.h>
#include<stdlib.h>
	void swap(int *a,int *b){
		int temp=*a;
		*a=*b;
		*b=temp;
	}
void BubbleSort(int a[],int n){
	int i,j,flag=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}
int main(){
	int a[5]={7,5,4,8,3};
	BubbleSort(a,5);
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	return 0;
	
}
