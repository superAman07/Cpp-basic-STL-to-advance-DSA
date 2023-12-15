#include<iostream>
using namespace std;
int lastIndexOccurence(int arr[],int n, int k){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            return i;
        }
    }
    return 0;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lastIndexOccurence(arr,n,k);
    return 0;
}
