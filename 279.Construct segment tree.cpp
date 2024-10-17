#include<iostream>
#include<vector>
using namespace std;
int constructSegmentTree(vector<int>&arr,vector<int>&tree,int ss,int se,int si){
    if(ss==se){
        tree[si]=arr[ss];
        return arr[ss];
    }
    int mid=(ss+se)/2;
    tree[si]=constructSegmentTree(arr,tree,ss,mid,2*si+1)+constructSegmentTree(arr,tree,mid+1,se,2*si+2);
    return tree[si];
}
int main(){
    int n=4;
    vector<int>arr{10,20,30,40};
    vector<int>tree(n*4,0);
    cout<<constructSegmentTree(arr,tree,0,n-1,0);
    for(int i=1;i<4*n/2 -1;i++){
        cout<<" "<<tree[i];
    }
    return 0;
}
