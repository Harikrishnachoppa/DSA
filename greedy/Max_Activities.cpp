#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
	if(a.second<b.second){
		return 1;
	}
	else{
		return 0;
	}
}
int maxActivities(pair<int,int>A[],int n){
	sort(A,A+n,comp);
	int res=1;
	int prev=0;
	for(int curr=1;curr<n;curr++){
		if(A[curr].first>=A[prev].second){
			res++;
			prev=curr;
		}
	}
	return res;
}

int main(){
	pair<int,int>arr[]={{2,3},{1,4},{5,8},{6,10}};
	int v=maxActivities(arr,4);
	cout<<v;
	
}
