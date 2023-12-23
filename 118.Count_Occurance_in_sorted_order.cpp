#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int CountOccuranceInSortedArray(vector<int>&v,int a){
    unordered_map<int,int>m;
    for(auto i:v){
        m[i]++;
    }
    for(auto it=m.begin();it!=m.end();++it){
        if(it->first==a){
            return it->second;
        }
    }
    return -1;
}
int main(){
    vector<int>v;
    int n;
    int a;
    cin>>n>>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<CountOccuranceInSortedArray(v,a);
    return 0;
}
