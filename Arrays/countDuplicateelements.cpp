#include<stdio.h>
#include<stdlib.h>
int main(){
		int A[]={3,6,8,8,10,12,15,15,15,20};
		int j;
		for(int i=0;i<10;i++){
			if(A[i]==A[i+1]){
				j=i+1;
				while(A[j]==A[i]){
					j++;
				}
				printf("%d appearing %d times\n",A[i],j-i);
				i=j-1;
			}
		}

}
