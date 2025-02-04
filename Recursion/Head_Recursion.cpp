#include<iostream>
//by using recursion
/*void fun(int x){
	if(x>0){
		printf("%d",x);
		fun(x-1);
	}
}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	fun(n);
	return 0;
}*/
//By using looping
void fun(int n){
	int i=1;
	while(i<=n){
		printf("%d",i);
		i++;
		}
	}
	int main(){
		int x;
		printf("Enter the number: ");
		scanf("%d",&x);
		fun(x);
		return 0;
	}
