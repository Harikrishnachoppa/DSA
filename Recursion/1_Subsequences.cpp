include<iostream>
include<vector>
using namespace std;
void fun(vector<vector<char>>&hm,char A[],int n,int i){
    vector<char>m;
    if(i==n){
        hm.push_back(m);
        return ;
    }
    fun(hm,A,n,i+1);
    m.push_back(A[i]);
    fun(hm,A,n,i+1);
    m.pop_back();
}
vector<vector<char>>fun1(char A[],int n){
        vector<vector<char>>hm;
        fun(hm,A,n,0);
        return hm;
}
int main() {
    char A[]={'a','b','c'};
    vector<vector<char>>d=fun1(A,3);
    for(auto p:d){
        for(auto m:p){
            cout<<m<<" ";
        }
        cout<<endl;
    }

    return 0;
}
