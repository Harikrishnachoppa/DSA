#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v={1,2,3,4,5,6,7,8,9,10};
	vector<int>:: iterator x;
	x=v.begin();
	while(x!=v.end()){
		if(*x%2==0){
			v.erase(x);
		}
		else{
			x++;
			
		}
	}
	for(int i=v.begin();i!=v.end();i++){
		cout<<v[i];
	}
	return 0;
	
}
