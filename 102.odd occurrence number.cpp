#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//naive solution
void OddOccurrence(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(v[i]==v[j]){
                count++;
            }
        }
        if(count %2!=0){
            cout<<v[i];
            break;
        }
    }
}
// void OddOccurrence(vector<int>&v){
//     unordered_map<int,int>m;
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         m[v[i]]++;
//     }
//     for(auto i:m){
//         if(i.second %2!=0){
//             cout<<i.first;
//         }
//     }
// }
int main(){
    // vector<int>v{4,3,4,4,4,5,5};
    vector<int>v{8,7,7,8,8};
    OddOccurrence(v);
    return 0;
}
