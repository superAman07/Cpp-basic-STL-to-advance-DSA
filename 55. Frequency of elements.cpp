#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
void freq_of_elements(vector<int>&arr){
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    // for(int i=0;i<arr.size()-(arr.size()/2);i++){
    //     cout<<m[arr[i]]<<" ";
    // }
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<(*it)->first<<" "<<(*it)->second<<"\n";
    // }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\n";
    }
}
int main(){
    vector<int>arr{10,5,20,5,10,5};
    freq_of_elements(arr);
    return 0;
}