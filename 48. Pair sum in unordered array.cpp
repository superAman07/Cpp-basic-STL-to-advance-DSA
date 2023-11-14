// naive solution

// #include<bits/stdc++.h>
// using namespace std;
// bool pair_sum(int arr[],int n,int sum){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if((arr[i]+arr[j])==sum){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     // int arr[]{3,2,8,15,-8};
//     // int arr[]{2,4,6,3};
//     int arr[]{5,8,-3,6};
//     int n=sizeof(arr)/sizeof(arr[2]);
//     // int sum=17;
//     // int sum=11;
//     int sum=3;
//     cout<<std::boolalpha<<pair_sum(arr,n,sum);
//     return 0;
// }

   // optimized solution

#include<bits/stdc++.h>
using namespace std;
bool pair_sum(int arr[],int n, int sum){
    unordered_set<int>s;
    int flag=0;
    for(int i=0;i<n;i++){
      if(s.find(sum-arr[i])==s.end()){
        s.insert(arr[i]);
      }
      else{
        return true;
      }
    }
    return false;
}
int main(){
    int arr[]{3,2,8,15,-8};
    // int arr[]{2,4,6,3};
    // int arr[]{5,8,-3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=17;
    // int sum=11;
    // int sum=3;
    cout<<boolalpha<<pair_sum(arr,n,sum);
    return 0;
}