// #include<bits/stdc++.h>
// using namespace std;
// void CountGreater(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[i]){                 //O(n^2) or theta(n^2)
//                 count++;
//             }
//         }
//         cout<<count<<" ";
//     }
// }
// int main(){
//     vector<int>arr{8,10,2,20};
//     CountGreater(arr);
//     return 0;
// }

    // efficient way

#include<iostream>
#include<map>
using namespace std;
void GreaterElement(int arr[],int n){
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
        int freq=it->second;
        it->second=cum_freq;
        cum_freq+=freq;
    }
    for(int i=0;i<n;i++){
        cout<<m[arr[i]]<<" ";
    }
}
int main(){
    int arr[]{8,10,2,20};
    int n=sizeof(arr);
    GreaterElement(arr,n);
    return 0;  
}
