#include<iostream>
#include<vector>
using namespace std;
int check(vector<int>& v, int n,int m){
   if(m>v.size()) return -1;
   if(v[m]==n) return m;
   return check(v,n,m+1);
}
int main(){
    vector<int> v  = {1,2,3,4,5};
    int target = 4;
    cout<<check(v,target,0);
}

string countandsay(int n){
    if(n==1) return "1";
    string say = countandsay(n-1);
}