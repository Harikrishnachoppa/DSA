#include<stdio.h>
/*int pow(int m,int n){
	if(n==0){
		return 1;
		
	}
	else{
		return pow(m,n-1)*m;
	}
}
int main(){
	int x,y;
	printf("Enter the x and y numbers: ");
	scanf("%d \n %d",&x,&y);
	int value=pow(x,y);
	printf("power of %d to %d is %d ",x,y,value);
	return 0;
}*/
int pow(int m,int n){
	if(n==0){
		return 1;
	}
	if(n%2==0){
		return pow(m*m,n/2);
	}
	else{
		return m*pow(m*m,(n-1)/2);
	}
}
int main(){
	int x,y;
	printf("Enter the x and y numbers: ");
	scanf("%d \n %d",&x,&y);
	int value=pow(x,y);
	printf("power of %d to %d is %d ",x,y,value);
	return 0;
}
