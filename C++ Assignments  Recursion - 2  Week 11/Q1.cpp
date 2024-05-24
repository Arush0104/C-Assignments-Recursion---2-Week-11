#include<iostream>
#include<vector>
using namespace std;
vector<int> rev(vector<int>& v, int n,int m){
    if(n==m) return v;
    swap(v[n],v[m]);
    return rev(v,n+1,m-1);
    
}
int main(){
    vector<int> v  = {1,2,3,4,5};
    int m = v.size()-1;
    rev(v,0,m);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}