#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr,n);
    return 0;
}