#include<bits/stdc++.h>
using namespace std;
int maxcards(int A[],int size,int k){
	int ls=0,rs=0,maxsum=0;
	for(int i=0;i<=k-1;i++){
		ls+=A[i];
	}
	maxsum=ls;
	int s=size-1;
	for(int i=k-1;i>=0;i--){
		ls-=A[i];
		rs+=A[s];
		maxsum=max(maxsum,ls+rs);
		s--;
	}
	return maxsum;
	
}
int main(){
	int A[]={6,2,3,4,7,2,1,7,1};
	int k=4;
	int size=sizeof(A)/sizeof(A[0]);
	cout<<maxcards(A,size,k)<<endl;
}
