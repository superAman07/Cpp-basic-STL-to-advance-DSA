#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// Iterative solution using stack
// void reversing(queue<int>&q){
//     stack<int>res;
//     while(!q.empty()){
//         res.push(q.front());
//         q.pop();
//     }
//     while(!res.empty()){
//         cout<<res.top()<<" ";
//         res.pop();
//     }
// }

// recusive solution
void reversing(queue<int>&q){
    if(q.empty())return;
    int x = q.front();
    q.pop();
    reversing(q);
    q.push(x);
    cout<<q.back()<<" ";
}
int main(){
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    reversing(q);
    return 0;
}
