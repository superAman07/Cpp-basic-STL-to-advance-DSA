// take a look

#include<bits/stdc++.h>
using namespace std;
// int myCmp(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second==p2.second){
//         return p1.first>p2.first;
//     }
//     return p1.second>p2.second;
// }
// void freq_in_linear_manner(vector<int>&v){
//     int n=v.size();
//     unordered_map<int,int>m;
//     for(int i=0;i<n;i++){
//         m[v[i]]++;
//     }
//     vector<pair<int,int>>v1(m.begin(),m.end());
//     sort(v1.begin(),v1.end(),myCmp);
//     for(auto i:v1){
//         while(i.second!=0){
//             cout<<i.first<<" ";
//             i.second--;
//         }
//     }
// }
void sort_by_freq(vector<int>&v){
    int n=v.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    vector<int>freq[n+1];
    // for(auto x:m){
    //     freq[x.second].push_back(x.first);
    // } // instead of doing this we use 
    for(int i=0;i<n;i++){
        int f=m[v[i]];
        if(f!=-1){
            freq[f].push_back(v[i]);
            m[f]=-1;  
        }
    }
    int index=0;
    for(int i=n;i>0;i--){
        for(int x:freq[i]){
            for(int j=0;j<i;j++){
                v[index++]=x;
            }
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>v{10,5,20,10,10,5,20};
    // freq_in_linear_manner(v);
    sort_by_freq(v);
    return 0;
}