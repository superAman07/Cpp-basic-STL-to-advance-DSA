/ naive solution
#include<iostream>
using namespace std;
int main(){
    // int arr[]{3,8,6,12,10,7};
    int arr[]{5,13,6,9,12,11,8};
    int p= 6;
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        if(arr[i]<arr[p]){
            cout<<arr[i]<<" ";
        }
        i++;
    }
    cout<<arr[p]<<" ";
    i=0;
    while(i<n){
        if(arr[i]>arr[p]){
            cout<<arr[i]<<" ";
        }
        i++;
    }
    return 0;
}
