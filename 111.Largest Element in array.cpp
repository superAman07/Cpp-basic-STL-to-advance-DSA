#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]{5,8,20,10};
    make_heap(arr,arr+4);
    cout<<arr[0]<<"\n";
    return 0;
}






 // O(n) time complexity
#include<bits/stdc++.h>
using namespace std;
int max(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}
int main(){
    int arr[]{5,8,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arr[max(arr,n)];
    return 0;
}








//naive solution
#include<bits/stdc++.h>
using namespace std;
int LargestElement(int arr[],int n){
    for(int i=0;i<n;i++){
       bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]{5,8,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LargestElement(arr,n)<<"\n";
    cout<<arr[LargestElement(arr,n)];
    return 0;
}
