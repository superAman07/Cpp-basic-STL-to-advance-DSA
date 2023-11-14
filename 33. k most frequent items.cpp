//   // using unordered_map and vactor

#include<bits/stdc++.h>
using namespace std;
bool mycmp(pair<int,int>p1,pair<int,int>p2);
void k_most_frequent_items(vector<int>&v,int k){
    int n=v.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    vector<pair<int,int>>v1(m.begin(),m.end());
    sort(v1.begin(),v1.end(),mycmp);
    for(int i=0;i<k;i++){
        cout<<v1[i].first<<" ";
    }
}
bool mycmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second){
        return (p1.first < p2.first);
    }
    return (p1.second>p2.second);
}
int main(){
    // vector<int>v{10,5,20,5,10,30,10};
    vector<int>v{10,20,20,5,10,20,10};
    // vector<int>v{3,5,0,1,0,3,0};
    // vector<int>v{8,3,2,5,1,9,10};
    int k=2;
    k_most_frequent_items(v,k);
    return 0;
}


     // using unordered map and priority queue 

// #include<bits/stdc++.h>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// struct mycmp{
//     bool operator()(pair<int,int>p1,pair<int,int>p2){
//         if(p1.second==p1.second){
//             return p1.first>p2.first;
//         }
//         return p1.second<p2.second;
//     }
// };
// void k_most_frequent_items_using_pq_n_um(vector<int>&arr,int k){
//     int n=arr.size();
//     unordered_map<int,int>m;
//     for(int i=0;i<n;i++){
//         m[arr[i]]++;
//     }    
//     priority_queue<pair<int,int>,vector<pair<int,int>,mycmp>>pq(m.begin(),m.end());
//     for(int i=0;i<k;i++){
//         cout<<pq.top().first<<" ";
//         pq.pop();
//     }
// }
// int main(){
//     vector<int>arr{10,5,20,5,10,30,10};
//     int k=3;
//     k_most_frequent_items_using_pq_n_um(arr,k);
//     return 0;
// }