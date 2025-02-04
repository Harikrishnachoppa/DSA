#include<iostream>
//by using recursion
void fun(int x){
	if(x>0){
		printf("%d",x);
		fun(x-1);
		fun(x-1);
	}
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	fun(n);
	return 0;
}
