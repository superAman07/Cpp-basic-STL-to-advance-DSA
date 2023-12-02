#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void ReverseArray(vector<int>&v){
    int n=v.size();
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }
    for(auto it = s.begin();it!=s.end();++it){
        cout<<*it<<" ";
    }
    int x = n - s.size();
    for(int i=0;i<x;i++){
        cout<<"0 "; 
    }
}
int main(){
    vector<int>v{10,20,20,30,30,30,30};
    ReverseArray(v);
    return 0;
}
