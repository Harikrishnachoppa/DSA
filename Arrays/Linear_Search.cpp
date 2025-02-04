#include<stdio.h>
struct array {
	int A[10],size,length;
};
void swap(int* x,int* y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int Linearsearch(struct array *o,int key){
	for(int i=0;i<o->length;i++){
		if(key==o->A[i]){
			swap(&o->A[i],&o->A[0]);
			
		return i;
	}
	}
	return -1;
	
}
void display(struct array o){
	printf("Display the elements: "); 
	for(int i=0;i<o.length;i++)
{	
printf(" %d\t",o.A[i]);
}
	
}

int main(){
	struct array obj={{2,4,8,6,10},10,5};
	int key;
	printf("Enter the key element: ");
	scanf("%d",&key);
int result=	Linearsearch(&obj,key);
if(result !=-1){
	printf("The element found at index number %d \n",result);
	
}else{
	printf("The element is not found\n");
}
	display(obj);
	
}
