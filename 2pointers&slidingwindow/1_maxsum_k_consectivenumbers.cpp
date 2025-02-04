#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int subsum(int A[],int size,int k){
    int l=0,r=k-1;
    int maxsum=0;
    for(int i=l;i<=r;i++){
        maxsum+=A[i];
    }
    int sum=maxsum;
    while(r<size-1){
        sum=sum-A[l];
        l++;
        r++;
        sum=sum+A[r];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}

int main() {
    int A[]={-1,2,3,3,4,5,-1};
    int size=sizeof(A)/sizeof(A[0]);
    int k=3;
    cout<<subsum(A,size,k);


    return 0;
}
