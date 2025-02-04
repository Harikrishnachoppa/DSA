#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class substring{
	public:
		int solution(string s){
			int l=0,r=0,maxlen=0;
			int size=s.size();
			vector<int>v(256,-1);
			while(r<size){
				if(v[s[r]]!=-1){
					l=max(v[s[r]]+1,l);
				}
				maxlen=max(maxlen,r-l+1);
				v[s[r]]=r;
				r++;
			}
			return maxlen;
		}
};
int main(){
	substring obj;
	string m="takeUforward";
	cout<<"The longest subtring without repeating characther is : "<<obj.solution(m);
	return 0;
}
