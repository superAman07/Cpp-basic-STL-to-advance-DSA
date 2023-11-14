   // Naive solution

// #include<bits/stdc++.h>
// using namespace std;
// void repeating_element(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int flag=0;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){           //O(n^2)
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==1){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]{10,8,10,7,7,6};
//     // int arr[]{2,2,2,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     repeating_element(arr,n);
//     return 0;
// }

   // efficient solution

#include<bits/stdc++.h>
using namespace std;
void repeating_elements(int arr[],int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
} 
int main(){
    int arr[]{10,8,10,7,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    repeating_elements(arr,n);
    return 0;
}