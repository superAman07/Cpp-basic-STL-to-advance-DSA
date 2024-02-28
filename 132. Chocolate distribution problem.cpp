// In this we have to pick m elements and diff of max and min elements in these m elements
// should be minimum

#include<iostream>
#include<algorithm>
using namespace std;
int minDiff(int arr[],int m,int n){
    if(m>n)return -1;
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    for(int i=1;(i+m-1)<n;i++){
        res = min(res,(arr[i+m-1]-arr[i]));
    }
    return res;
}
int main(){
    int arr[]{7,3,2,4,9,12,56};
    int m=3;  //o/p:- 2 (2,3,4)
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<minDiff(arr,m,n);
    return 0;
}
