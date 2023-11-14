#include<bits/stdc++.h>
using namespace std;
int myCmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second){
        return p1.first>p2.first;
    }
    return p1.second>p2.second;
}
void freq_of_array(vector<int>&v){
    int n=v.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    vector<pair<int,int>>v1(mp.begin(),mp.end());
    sort(v1.begin(),v1.end(),myCmp);
    for(auto i:v1){
        while(i.second!=0){
           cout<<i.first<<" ";
           i.second--; 
        }
    }
    // multiset<int,greater<int>>s;
    // for(int i=0;i<n;i++){
    //     s.insert(v[i]);
    // }
    // for(const auto &i:s){
    //     cout<<i<<" ";
    // }
}
int main(){
    vector<int>v{10,5,20,10,10,5,20};
    freq_of_array(v);
    return 0;
}