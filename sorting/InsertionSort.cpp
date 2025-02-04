
#include<stdio.h>
void sort(int A[],int n){
	for(int i=0;i<n;i++){
		int j=i-1;
		int x=A[i];
		
		while(j>-1 && A[j]>x){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}

}
int main(){
	int a[]={6,3,5,2,7,1};
	sort(a,6);
	for(int i=0;i<6;i++){
		printf("%d",a[i]);
	}
}
