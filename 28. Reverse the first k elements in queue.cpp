#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
void reverse_first_k_elements(queue<int>&q,int k){
    vector<int>v;
    for(int i=0;i<k;i++){
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    while(q.empty()!=(q.size()+1)){
        cout<<q.front()<<" ";
        q.pop();
    }   
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    reverse_first_k_elements(q,k);
    return 0;
}

      // With the help of stack
    
// #include<bits/stdc++.h>
// #include<stack>
// #include<queue>
// using namespace std;

// void reverse_k_elements(stack<int>&q,int k){
//     stack<int>s;
//     for(int i=0;i<k;i++){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     for(int i=0;i<(q.size()-k);i++){
//         q.push(q.front());
//         q.pop();
//     }
//     for(auto x:q){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     int k;
//     cout<<"Enter the value of k:";
//     cin>>k;
//     reverse_k_elements(q,k);
//     return 0;
// }