#include<iostream>
#include<unordered_map>
using namespace std;

int MaxLen(int arr[],int n , int sum){
    unordered_map<int,int>m;
    int pre_sum = 0;
    int res =0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==sum){
            res = i+1;
        }
        if(m.find(pre_sum)!=m.end()){
            res = max(res,i-m[pre_sum-sum]);
        }
        else{
            m[pre_sum]=i;
        }
    }
    return res;
}
int main(){
    // int arr[]{8,3,1,5,-6,6,2,2};
    int arr[]{5,8,-4,-4,9,-2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int sum = 4;
    int sum = 0;
    cout<<MaxLen(arr,n,sum)<<endl;
    return 0;
}
