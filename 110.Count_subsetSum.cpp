#include<iostream>
using namespace std;
int countSubset(int arr[],int n,int sum){
    if(n==0)return (sum==0)?1:0;
    return countSubset(arr,n-1,sum)+countSubset(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[]{10,20,15,13,28,18};
    int sum=28;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countSubset(arr,n,sum);
    return 0;
}