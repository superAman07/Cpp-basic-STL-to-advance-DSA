// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int>Ceil_value_for_element_on_right(int arr[],int n){
//     stack<int>s;
//     vector<int>v;
//     s.push(arr[n-1]);
//      for(int i=n-2;i>=0;i--){
//         while(!s.empty() && (arr[i]>=s.top())){
//             s.pop();
//         }
//         int res=(s.empty())?-1:s.top();
//         v.push_back(s.top());
//         s.push(arr[i]);
//     }
//     reverse(v.begin(),v.end());
//     return v;
// }
// int main(){
//     int arr[]{100,50,30,60,55,32};
//     vector<int>r=Ceil_value_for_element_on_right(arr,6);
//     for(auto i:r){
//         cout<<i<<" ";
//     }
//     return 0;
// }

     // another naive method 

// #include<bits/stdc++.h>
// using namespace std;
// void Ceil_value_for_element_on_right(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int diff=INT_MAX;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>=arr[i]){
//                 diff=min(diff,arr[j]-arr[i]);
//             }                   // time complxity:- O(n^2)
//         }                       // aux. space:- theta(1)
//          if(diff==INT_MAX){
//             cout<<-1<<" ";
//             }
//          else{
//             cout<<arr[i]+diff<<' ';
//         }
//     }
// }
// int main(){
//     int arr[]{100,50,30,60,55,32};
//     int n=sizeof(arr);
//     Ceil_value_for_element_on_right(arr,n);
//     return 0;
// }


      // efficient method

#include<bits/stdc++.h>
using namespace std;
void ceiling_for_everyElement_on_right(vector<int>&v){
    int n=v.size();
    set<int>s;
    vector<int>v1;
    for(int i=n-1;i>=0;i--){
        auto it=s.lower_bound(v[i]);
        if(it==s.end()){
            v1.push_back(-1);
        }
        else{
            v1.push_back(*it);     // time complxity:- O(n*log(n)) 
        }                          // aux. space:- theta(n)
        s.insert(v[i]);
    }
     reverse(v1.begin(),v1.end());
     for(auto x:v1){
        cout<<x<<" ";
     }
}
int main(){
     vector<int>v{100,50,20,60,55,32};
     ceiling_for_everyElement_on_right(v);
    return 0;
} 