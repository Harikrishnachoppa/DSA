#include<bits/stdc++.h>
using namespace std;
/*int LongestSubarray(int A[],int size,int k){
	int len=0;
	for(int i=0;i<size;i++){
			int sum=0;
		for(int j=i;j<size;j++){
			sum +=A[j];
			if(sum<=k){
			len=max(len,j-i+1);	
			}
			else if(sum>k)break;
		}
	}
	return len;
}*/
int LongestSubarray(int A[],int size,int k){
	int l=0,r=0,maxlen=0,sum=0;
	while(r<size){
		sum+=A[r];
		if(sum>k){
			sum-=A[l];
			l++;
		}
	if(sum<=k){
			maxlen=max(maxlen,r-l+1);
		}
		r++;
	}
	return maxlen;
}
int main(){
	int A[]={2,5,1,7,10};
	int size=sizeof(A)/sizeof(A[0]);
	int k=14;
	cout<<LongestSubarray(A,size,k);
}
