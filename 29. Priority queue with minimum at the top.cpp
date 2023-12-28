#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]{10,1,7};
    for(int i=0;i<sizeof(arr);i++){   
        arr[i]=-arr[i];                
    }
    priority_queue<int>pq(arr,arr+3);
    while(!pq.empty()){
        cout<<-pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

