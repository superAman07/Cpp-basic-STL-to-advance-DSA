// #include<bits/stdc++.h>
// #include<iostream>
// #include<queue>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{1,23,42,8,7};
//     int k=2;
//     sort(v.begin(),v.end());                            // nlog(n)
//     for(int i=v.size()-k;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

   // using min heap (better way)

#include<bits/stdc++.h>
using namespace std;
void K_largest_elements_using_min_heap(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);
    for(int i=(n-k);i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    int n=6,k=4;
    int arr[]{12,3,5,7,13,19};
    K_largest_elements_using_min_heap(arr,n,k);
    return 0;
}