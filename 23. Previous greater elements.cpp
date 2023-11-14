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

#include<bits/stdc++.h>
using namespace std;
void previousGreater(vector<int>&arr){
    int n=arr.size();
    stack<int>s;
    s.push(arr[0]);
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        int res=(s.empty())?-1:s.top();
        cout<<res<<" ";
        s.push(arr[i]);
    }
}
int main(){
    vector<int>arr{20,10,24,12,8,9};// -1,20,-1,24,12,12
    previousGreater(arr);
    return 0;
}