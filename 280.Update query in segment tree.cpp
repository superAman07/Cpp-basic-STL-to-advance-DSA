#include<iostream>
#include<vector>
using namespace std;
// just for making tree[] array/vector
int constructSegmentTree(vector<int>&arr,vector<int>&tree,int ss,int se,int si){
    if(ss==se){
        tree[si]=arr[ss];
        return arr[ss];
    }
    int mid=(ss+se)/2;
    tree[si]=constructSegmentTree(arr,tree,ss,mid,2*si+1)+constructSegmentTree(arr,tree,mid+1,se,2*si+2);
    return tree[si];
}
// Update query in segement tree...in O(logn)
void updateSegmentTree(vector<int>&tree,int ss,int se,int i,int si,int diff){
    if(i<ss || i>se)return;
    tree[si]+=diff;
    if(ss<se){
        int mid=(ss+se)/2;
        updateSegmentTree(tree,ss,mid,i,2*si+1,diff);
        updateSegmentTree(tree,mid+1,se,i,2*si+2,diff);
    }
}
int main(){
    int n=4;
    vector<int>arr{10,20,30,40};
    vector<int>tree(n*4,0);
    cout<<constructSegmentTree(arr,tree,0,n-1,0);
    for(int i=1;i<4*n/2 -1;i++){
        cout<<" "<<tree[i];
    }
    cout<<endl;
    int new_val = 25;
    int i=1;
    int diff= new_val-arr[i];
    updateSegmentTree(tree,0,n-1,i,0,diff);
    return 0;
}
