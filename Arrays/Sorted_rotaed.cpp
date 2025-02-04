#include<iostream>
using namespace std;
int *A;
int item,size;
int sorted_roated(int beg,int end){
	if(beg>end)
		return -1;
		int mid=(beg+end)/2;
		if(A[mid]==item){
			return mid;
		}
		if(A[beg]<=A[mid]){
			if(item>=A[beg]&&item<=A[mid]){
				return sorted_roated(beg,mid-1);
			}
			return sorted_roated(mid+1,end);
		}
		if(A[mid+1]<A[end]){
			if(item>=A[mid+1]&&item<=A[end]){
				return sorted_roated(mid+1,end);
			}
			return sorted_roated(beg,mid-1);
		}
}
int main(){
	cout<<"The array size";
	cin>>size;
	A=new int[size];
	cout<<"Enter the array eleemtens"<<endl;
	for(int i=0;i<size;i++){
		cin>>A[i];
	}
	cout<<"Enter the searched element"<<endl;
	cin>>item;
    int res=sorted_roated(0,size-1);
    if(res!=-1){
    	cout<<"The element found at "<<res;
	}
	else{
		cout<<"The element is not found";
	}
	return 0;
}

