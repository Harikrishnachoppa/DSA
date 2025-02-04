#include<stdio.h>
struct array {
    int A[10],size,length;
    
};
void firstposition(struct array *h,int x){
	for(int i=h->length;i>0;i--){
		h->A[i]=h->A[i-1];
		
		
	}
	h->A[0]=x;
	h->length++;
	
	
}
void atindexposition(struct array *k,int y,int x){
	for(int i=k->length;i>y;i--){
		k->A[i]=k->A[i-1];
	}
	k->A[y]=x;
	k->length++;
}
void append(struct array *p,int a){
    if(p->length<p->size){
        p->A[p->length++]=a;
    }
}
void display(struct array c){
    printf("Display the all the elements");
    for(int i=0;i<c.length;i++){
        printf(" %d  ",c.A[i]);
    }
}
int main(){
    struct array arr;
     printf("Enter the size :");
    scanf("%d",&arr.size);
    printf("Enter the size of length:");
    scanf("%d",&arr.length);
    printf("Enter the array elements:\n");
    
    for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.A[i]);
    }
    int indexno;
    printf("Enter the index number: ");
    scanf("%d",&indexno);
    int x;
    printf("Enter the append number:");
    scanf("%d",&x);
    //append(&arr,x);
   // firstposition(&arr,x);
    atindexposition(&arr,indexno,x);
    display(arr);
    return 0;
}
