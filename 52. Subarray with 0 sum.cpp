    // naive solution

// #include<bits/stdc++.h>
// using namespace std;
// bool subarray_with_0_sum(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int curr_sum=0;
//         for(int j=i;j<n;j++){
//             curr_sum+=arr[j];
//             if(curr_sum==0){
//                 return true;
//             }
//         }
//         return false;
//     }
//     return false;
// }
// int main(){
//     vector<int>arr{1,4,13,-3,-10,5};
//     // vector<int>arr{1,4,13,3,10};
//     cout<<boolalpha<<subarray_with_0_sum;
//     return 0;
// }

   // efficient solution

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
bool zero_sum_subarray(vector<int>&arr){
    int n=arr.size();
    unordered_set<int>s;
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];     // 1,5,18,15,5,10  // 1,5,18,21,31  // 3,2,0,5
        if(s.find(arr[i])!=s.end()){
            return true;
        }
        if(prefix_sum==0){
            return true;
        }
        s.insert(prefix_sum);
    }
    return false;
}
int main(){
    vector<int>arr{1,4,13,-3,-10,5};
    // vector<int>arr{1,4,13,3,10};
    // vector<int>arr{3,-1,-2,5};
    cout<<boolalpha<<zero_sum_subarray(arr);
    return 0;
}