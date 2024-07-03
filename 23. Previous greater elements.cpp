// #include<bits/stdc++.h>
// using namespace std;
// void prevoiusGreater(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int j;
//          for(int j=i-1;j>=0;j--){
//             if(arr[j]>arr[i]){
//                 cout<<arr[j]<<" ";
//                 break;
//             }
//          }
//          if(j==-1){
//             cout<<"-1 ";
//          }
//     }
// }
// int main(){
//     vector<int>arr{15,10,18,12,4,6,2,8};
//     prevoiusGreater(arr);
//     return 0;
// }


// best solution

//Naive solution O(n^2)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>prevGreater(vector<int>&v){
//     vector<int>res;
//     int next=1;
//     res.push_back(-1);
//     while(next<v.size()){
//         int prev=next-1;
//         while(v[prev]<v[next]){
//             prev--;
//         }
//         if(prev<0){
//             res.push_back(-1);
//         }else{
//             res.push_back(v[prev]);
//         }
//         next++;
//     }
//     return res;
// }
// int main(){
//     // vector<int>v{15,10,18,12,4,6,2,8};
//     // vector<int>v{8,10,12};
//     vector<int>v{12,10,8};
//     vector<int>result=prevGreater(v);
//     for(auto it:result){
//         cout<<it<<" ";
//     }
//     return 0;
// }

//Efficient solution O(n)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void PrevGreater(vector<int>&v){
    stack<int>s;
    s.push(v[0]);
    for(int i=0;i<v.size();i++){
        while(!s.empty() && s.top()<=v[i]){
            s.pop();
        }
        int x=s.empty()?-1:s.top();
        cout<<x<<" ";
        s.push(v[i]);
    }
}
int main(){
    vector<int>v{15,10,18,12,4,6,2,8};
    PrevGreater(v);
    return 0;
}
