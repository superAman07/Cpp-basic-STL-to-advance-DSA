    // using  max heap

#include<iostream>
#include<queue>
using namespace std;
void mySort(int arr[],int n){
    priority_queue<int>pq(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        arr[i]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]{12,8,7};
    mySort(arr,3);
    return 0;
}

    //using min heap

#include<bits/stdc++.h>
using namespace std;
void mysort(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=n-1;i>=0;i--){
        arr[i]=pq.top();
        pq.pop();
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]{10,2,7};
    mysort(arr,3);
    return 0;
}
