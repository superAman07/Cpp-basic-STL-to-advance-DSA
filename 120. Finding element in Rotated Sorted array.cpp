// Using linear search

// #include<iostream>
// using namespace std;
// int index(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]{20,30,40,50,8,9,10};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int key = 9;
//     cout<<index(arr,n,key);
//     return 0;
// }

// using binary search

#include<iostream>
#include<vector>
using namespace std;
int indexOfSorted(vector<int>&arr,int key){
    int n = arr.size();
    int low = 0, high = n-1;
    while(low<= high){
        int mid = low + (high - low)/2;
        if(arr[mid]==key)return mid;
        else if(arr[low]<arr[mid]){
            if(key >= arr[low] && key < arr[mid]){
                high = mid -1;
            }
        }
        else{
            if(key > arr[mid] && key <= arr[high]){
                low = mid +1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr{20,30,40,50,8,9,10};
    int key = 8;
    cout<<indexOfSorted(arr,key);
    return 0;
}
