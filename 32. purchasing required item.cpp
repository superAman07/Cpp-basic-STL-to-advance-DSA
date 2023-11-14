// #include<bits/stdc++.h>
// #include<iostream>
// #include<deque>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{1,12,5,111,123};
//     cout<<"Sorted elements\n";
//     sort(arr.begin(),arr.end());
//     for(auto x:arr){
//         cout<<x<<" ";
//     }
//     int sum=10,count=0;
//     int i=0;
//     while(sum>arr[i]){
//         sum-=arr[i];
//         count++;
//         i++;
//     }
//     cout<<"\n"<<count<<"\n";
//     return 0;
// }

    // using min heap

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int Purchasing_req_items_using_min_heap(vector<int>&v,int sum){
    priority_queue<int,vector<int>,greater<int>>pq(v.begin(),v.end());
    int count=0;
    cout<<"Sort given vector using min heap\n";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
        while(!pq.empty()&&(sum>=pq.top())){
        sum-=pq.top();
        count++;
        pq.pop();
    }
    cout<<"\n";
    return count;
}
int main(){
    vector<int>v{1,3,5,6,2};
    int sum=10;
    cout<<Purchasing_req_items_using_min_heap(v,sum);
    return 0;
}