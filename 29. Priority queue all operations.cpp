#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]{10,1,7};
    priority_queue<int>pq(arr,arr+3); // TC O(n) which is better
    cout<<"Max heap: ";
    while(!pq.empty()){       // empty O(1)
        // cout<<-pq.top()<<" ";
        cout<<pq.top()<<" ";  //O(1)
        pq.pop();             //O(log n)
    }
    cout<<"\nMin Heap: ";
    priority_queue<int,vector<int>,greater<int>>pq1(arr,arr+3);
    while(!pq1.empty()){
        // cout<<-pq1.top()<<" ";
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    // alternate way of using greater function or for Min Heap

    for(int i=0;i<sizeof(arr);i++){   
        arr[i]=-arr[i];                
    }
    priority_queue<int>pq2(arr,arr+3);
    cout<<"\nSize of PQ before pushing 23: "<<pq2.size()<<"\n"; //size O(1)
    pq2.push(-23);            //O(log n)
    cout<<"Size of PQ after pushing 23: "<<pq2.size()<<"\n";
    cout<<"Top element: "<<-pq2.top()<<"\n";  // top O(1)
    cout<<"Max heap alternate of using greater: ";
    while(!pq2.empty()){
        cout<<-pq2.top()<<" "; // using -ve sign to make as element were...
        pq2.pop();
    }
    return 0;
}

