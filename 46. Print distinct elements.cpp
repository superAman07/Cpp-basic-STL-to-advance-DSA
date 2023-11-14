// #include<iostream>
// #include<unordered_set>
// #include<set>
// #include<vector>
// using namespace std;
// void distinceElement(vector<int>&arr){
//     int n=arr.size();
//     set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     for(auto x:s){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     vector<int>arr{4,8,5,8,7,5};
//     distinceElement(arr);
//     return 0;
// }

  // unordered_set  (output will be unordered)

// #include<bits/stdc++.h>
// using namespace std;
// void distinct_element(vector<int>&v){
//     unordered_set<int>s;
//     for(int i=0;i<v.size();i++){
//         s.insert(v[i]);
//     }
//     for(auto x:s){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     vector<int>v{4,8,5,8,7,5};// 7 5 8 4
//     // vector<int>v{2,2,2};  // 2
//     // vector<int>v{10,10,4,10,4,10}; //4 10 or 10 4
//     distinct_element(v);
//     return 0;
// }

    //output(Same order as input)

#include<iostream>
#include<unordered_set>
using namespace std;
void distinct_element_sameOrderAs_input(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            cout<<arr[i]<<" ";
            s.insert(arr[i]);   
        }
    }
}
int main(){
    // int arr[]{4,8,5,8,7,5};  // 4 8 5 7 
    int arr[]{10,8,10,10,7};  // 10 8 7 
    int n=sizeof(arr)/sizeof(arr[0]);
    distinct_element_sameOrderAs_input(arr,n);
    return 0;
}