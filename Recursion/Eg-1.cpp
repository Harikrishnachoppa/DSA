#include<stdio.h>
/*
void fun1(int n){
	if(n>0){
		printf("%d\t",n);
		fun(n-1);
	}
}
int main(){
	int x;
	printf("Enter the number : ");
	scanf("%d",&x);
	fun1(x);
	return 0;
}*/
void fun2(int n){
	if(n>0){
		fun2(n-1);
		printf("%d",n);
	}
}
int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	fun2(x);
	return 0;
}

