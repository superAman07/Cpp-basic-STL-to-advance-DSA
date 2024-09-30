#include<bits/stdc++.h>
using namespace std;
void sumOfArray(int n,int arr[]){
    int sum=0;
      
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<"\n";
}
void average(int n, int arr[]){
    int avg,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum/2<<"\n";

}
int main(){
    int n,sum=0;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n];
      for(int i=0;i<n;i++){
            cout<<"Enter the element of "<<i+1<<" position: "<<"\n";
            cin>>arr[i];
    }
    //sumOfArray(n,arr);
    average(n,arr);
    return 0;
}