// // naive solution
// #include<iostream>
// using namespace std;
// string PairSum(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==x){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
// int main(){
//     int arr[]{40,20,50,10,30};
//     int x = 70;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<PairSum(arr,n,x);
//     return 0;
// } 

//Efficient solution With the help of hashing we can do efficiently for unsorted array
//But in case of sorted array we need to use two pointers approach.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]{10,20,30,40,50};
//     int x = 780;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         if(arr[s]+arr[e]==x){
//             cout<<"Yes";
//             return 0;
//         }
//         else if(arr[s]+arr[e]<x){
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     cout<<"No";
//     return 0;
// }

// triplet in the sorted or unsorted array with sum equal to x

#include<iostream>
using namespace std;
bool isPair(int arr[],int low,int n,int x){
    for(int i=0;i<n;i++){
        if(isPair(arr,low+1,n-1,x-arr[i]))
           return true;
    }
    return false;
}
int main(){
    int arr[]{2,3,4,8,9,20,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 32;
    int low = 0;
    cout<<isPair(arr,low,n,x);
    return 0;
}
