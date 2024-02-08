// Recursive index of first Occurence of element in sorted array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int firstOccurenceOfSortedArray(vector<int>&arr,int low, int high,int x){
//     int mid = low + (high-low)/2;
//     if(x<arr[mid]){
//         return firstOccurenceOfSortedArray(arr,low,mid-1,x);
//     }
//     else if(x>arr[mid]){
//         return firstOccurenceOfSortedArray(arr,mid+1,high,x);
//     }
//     else{
//         if(mid==0 || arr[mid-1]!=arr[mid])
//             return mid;
//         else
//             return firstOccurenceOfSortedArray(arr,low,mid-1,x);
//     }
//     return -1;
// }
// int main(){
//     vector<int>arr{10,20,25,30,30,30,40,50};
//     int n = arr.size();
//     int x = 30;
//     cout<<firstOccurenceOfSortedArray(arr,0,n,x);
//     return 0;
// }

//Iterative solution 
#include <bits/stdc++.h> 
using namespace std;
int Iterative_First_Occurence(vector<int>&arr,int x){
    int low = 0;
    int high = arr.size();
    int mid = low + (high - low)/2;
    while(low<=high){
        if(x<arr[mid]){
            high = mid -1;
        }
        else if(x>arr[mid]){
            low = mid +1;
        }
        else{
            if(mid == 0 || arr[mid-1]!=arr[mid]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr{10,20,25,30,30,30,40,50};
    int x = 30;
    cout<<Iterative_First_Occurence(arr,x);
    return 0;
}
