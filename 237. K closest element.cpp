#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void kClosestElement(vector<int>&v,int x,int k){
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<k;i++){
        pq.push({abs(v[i]-x),i});
    }
    for(int i=k;i<v.size();i++){
        int diff = abs(v[i]-x);
        if(pq.top().first>diff){
            pq.pop();
            pq.push({diff,i});
        }
    }
    while(!pq.empty()){
        cout<<v[pq.top().second]<<" ";
        pq.pop();
    }
}
int main(){
    vector<int>v{30,40,32,33,36,37};
    int x =38;
    int k=3;
    kClosestElement(v,x,k);
    return 0;
}
