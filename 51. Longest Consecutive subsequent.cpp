   // naive solution (O(n(logn)))

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int longest_consecutive_subsequent(vector<int>&arr){
//     int n=arr.size();
//     sort(arr.begin(),arr.end());         // O(nlogn)
//     int count=1, res=1;
//     for(int i=0;i<n-1;i++){
//         if((arr[i+1]-arr[i])==1){
//             count++;
//         }
//         else{
//             res=max(res,count);
//             count=1;
//         }
//     }
//     res=max(res,count);
//     return res;
// }
// int main(){
//     // vector<int>arr{1,9,3,4,2,20};
//     vector<int>arr{8,20,7,30};
//     // vector<int>arr{8,20,30};
//     cout<<longest_consecutive_subsequent(arr);
//     return 0;
// }

   //efficient solution

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void longest_consecutive_subsequent(vector<int>&arr){
    unordered_set<int>s;
    int n=arr.size();
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int res=0,curr=1;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            while(s.find(arr[i]+curr)!=s.end()){
                curr++;
            }
            res=max(res,curr);
        }
    }
    cout<<res+1<<"\n";
}
int main(){
    // vector<int>arr{1,9,3,4,2,20};
    vector<int>arr{8,20,7,30};
    longest_consecutive_subsequent(arr);
    return 0;
}