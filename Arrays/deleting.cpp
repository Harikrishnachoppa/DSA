// Online C compiler to run C program online
#include <stdio.h>
struct array{
	int A[10],length;
};
void delete_element(struct array *p,int index){
	int x=0;
	if(index>=0 && index<p->length){
		x=p->A[index];
		for(int i=index;i<p->length;i++){
			p->A[i]=p->A[i+1];
		}
		printf("The deleted value is %d at index number %d\n",x,index);
		p->length--;
	}
}
void display(struct array p){
	printf("Display the elements : ");
	for(int i=0;i<p.length;i++){
		printf("%d \t",p.A[i]);
	}
}
int main(){
	struct array a;
	printf("Enter the length: ");
	scanf("%d",&a.length);
	printf("Enter the array elements: \n");
	for(int i=0;i<a.length;i++){
		scanf("%d",&a.A[i]);
		
	}
	int index;
	printf("Enter the index number you want delete: ");
	scanf("%d",&index);
	delete_element(&a,index);
	display(a);
	return 0;

}
