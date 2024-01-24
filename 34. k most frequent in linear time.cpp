#include<bits/stdc++.h>
using namespace std;
void k_most_frequent_in_linear_time(vector<int>&v,int k){
    int n=v.size();
    unordered_map<int,int>m;
    for(auto x:v){
        m[x]++;
    }
    vector<int>freq[n+1];
    for(auto x:m){
        freq[x.second].push_back(x.first);
    }
    int count=0;
    for(int i=n;i>=0;i--){
        for(int x:freq[i]){
            cout<<x<<" ";
            count++;
            if(count==k){
                return;
            }
        }
    }
}
int main(){
    vector<int>v{10,5,30,5,10,10,20};
    int k=3;
    k_most_frequent_in_linear_time(v,k);
    return 0;
}
