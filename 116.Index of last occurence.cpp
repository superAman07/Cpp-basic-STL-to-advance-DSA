//T.C. O(n)

#include<iostream>
#include<vector>
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

// T.C. O(logn) using binary search

#include<iostream>
using namespace std;
int indexoflast(int arr[],int n,int x){
    int low=0,high = n-1, mid;
    while(high>=low){
        mid = (high+low)/2;
        if(arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            if(mid != n-1 || arr[mid]==arr[mid+1]){
                return mid+1;
            }
            else{
                low = mid+1;
            }
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
    cout<<indexoflast(arr,n,k);
    return 0;
}
