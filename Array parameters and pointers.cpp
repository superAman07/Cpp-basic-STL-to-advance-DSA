#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
    //int c=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] {10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    fun(arr,n);
    return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//void fun(int *arr,int n){
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//}
//int main(){
//    int arr[] {10,20,30,40};
//    int n=4;
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<"\n";
//    fun(arr,n);
//    return 0;
//}