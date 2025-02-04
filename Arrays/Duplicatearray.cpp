#include<stdio.h>
#include<stdlib.h>
int main(){
	int A[]={3,6,8,8,10,12,15,15,15,20};
	int lastduplicate=0;
	for(int i=0;i<10;i++){
		if(A[i]==A[i+1]&& A[i]!=lastduplicate){
			printf("%d\t",A[i]);
			lastduplicate=A[i];
		}
	}
}
