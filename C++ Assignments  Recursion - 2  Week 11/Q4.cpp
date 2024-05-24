#include<iostream>
#include<vector>
using namespace std;
void TriArr(vector<int>& v, int n){
    if(n==0) return;
    vector<int> temp(n-1);
    for(int i =0;i<n;i++){
            cout<<v[i]<<" ";
            if(i!=0) temp[i-1]= v[i-1]+v[i];
    }
    cout << endl;
    TriArr(temp, n-1);
}

int main() {
    vector<int> v = {5,4,3,2,1};
    TriArr(v,v.size());
}
