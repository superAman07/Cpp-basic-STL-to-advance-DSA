#include<bits/stdc++.h>
using namespace std;
void nextGreatest(vector<int>&v){
    int n=v.size();
    stack<int>s;
    s.push(v[n-1]);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && v[i]>=s.top()){
            s.pop();
        }
        int res=(s.empty())?-1:s.top();
        cout<<res<<" ";       // output will come in reverse order.......
        s.push(v[i]);
    }
}
int main(){
    vector<int>v{20,10,24,12,8,9};
    nextGreatest(v);
    return 0;
}

    // With the help of vector we can get the output in desired way

// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int>nextGreater(vector<int>&arr){
//     vector<int>v;
//     int n=arr.size();
//     stack<int>s;
//     s.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(!s.empty() && (arr[i]>=s.top())){
//             s.pop();
//         }
//         int result=(s.empty())?(-1):(s.top());
//         v.push_back(result);
//         s.push(arr[i]);
//     }
//     reverse(v.begin(),v.end());
//     return v;
// }
// int main(){
//     vector<int>arr{3,5,1,6,4,7,9,2};
//     vector<int>result=nextGreater(arr);
//     for(auto x:result){
//         cout<<x<<" ";
//     }
//     return 0;
// }