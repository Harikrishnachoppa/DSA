#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
	int r1=a.first/a.second;
	int r2=b.first/b.second;
	if(r1>r2){
		return 1;
	}
	else{
		return 0;
	}

}
double knapsack(pair<int,int>A[],int size,int cap){
	sort(A,A+size,comp);
	double res=0.0;
	for(int i=0;i<size;i++){
		if(A[i].second<=cap){
			res+=A[i].first;
			cap=cap-A[i].second;
			
		}
		else{
			res+=A[i].first*((double)cap/A[i].second);
			break;
		}
	}
	return res;
}
int main(){
	pair<int,int>A[]={{600,50},{500,20},{400,30}};
	int capacity=70;
	double ans=knapsack(A,3,capacity);
	cout<<ans;
	return 0;
	
}
