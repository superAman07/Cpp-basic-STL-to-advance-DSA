#include<bits/stdc++.h>
using namespace std;
int average(int arr[],int n){
    int average;
    if(n==0){
        return -1;
    }
    else{
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
         average=sum/n;
    }
    return average;
}
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cout<<"Enter the "<< i+1<<" element: ";
       cin>>arr[i];
    }
    average(arr,n);
    return 0;
}