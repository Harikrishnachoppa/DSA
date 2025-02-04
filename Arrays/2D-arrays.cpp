#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[3][4]={{2,4,6,8},{1,3,5,7},{10,12,14,16}};
    int *B[3]; 
    int **c;
B[0]=(int *)malloc(4*sizeof(int));
B[1]=(int *)malloc(4*sizeof(int));
B[2]=(int *)malloc(4*sizeof(int));
c=(int **)malloc(3*sizeof(int *));
c[0]=(int *)malloc(4*sizeof(int));
c[1]=(int *)malloc(4*sizeof(int));
c[2]=(int *)malloc(4*sizeof(int));
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d ",&c[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("The elements are %d ",c[i][j]);
			printf("\n");
		}
	}
return 0;
}
