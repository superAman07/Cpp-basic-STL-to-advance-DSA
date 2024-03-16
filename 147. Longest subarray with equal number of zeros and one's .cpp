//asked in many interviews

#include<iostream>
#include<unordered_map>
using namespace std;
int LongestSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }
    unordered_map<int,int>m;
    int pre_sum =0,res=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==0){
            res=i+1;
        }
        if(m.find(pre_sum)!=m.end()){
            res=max(res,i-m[pre_sum]);
        }
        else{
            m[pre_sum]=i;
        }
    }
    return res;
}
int main(){
    int arr[]{1,0,1,1,1,0,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<LongestSubarray(arr,n);
    return 0;
}
