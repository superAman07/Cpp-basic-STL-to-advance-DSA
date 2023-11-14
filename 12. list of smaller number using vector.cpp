#include<bits/stdc++.h>
using  namespace std;
vector<int>get_smaller(int arr[],int n,int k){
    vector<int>res;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            res.push_back(arr[i]);
        }
    }
    return res;
}
int main(){
    int arr[]{2,3,4,5,7,6,9};
    int k=7,n=7;
    vector<int>res=get_smaller(arr,n,k);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}
