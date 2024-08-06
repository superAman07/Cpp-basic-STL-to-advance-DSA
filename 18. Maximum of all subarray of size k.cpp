// naive solution
// #include<iostream>
// using namespace std;
// void printMaxInAllSubarray(int arr[],int n,int k){
//     for(int i=0;i<n-k+1;i++){
//         int maxEle=arr[i];
//         for(int j=i+1;j<i+k;j++){
//             maxEle = max(maxEle,arr[j]);
//         }
//         cout<<maxEle<<" ";
//     }
// }
// int main(){
//     int n=7;
//     int arr[]{10,8,5,12,15,7,6};
//     int k=3;
//     printMaxInAllSubarray(arr,n,k);
//     return 0;
// }

      // with the help of Dequeue

#include<iostream>
#include<deque>
using namespace std;
void PrintMaxInKsubArrays(int arr[],int n,int k){
    deque<int>dq(k);
    for(int i=0;i<k;i++){
        while(!dq.empty()&& arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty()&&dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty()&&arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()];
}
int main(){
    int n=7;
    int arr[]{10,8,5,12,15,7,6};
    int k=3;
    PrintMaxInKsubArrays(arr,n,k);
    return 0;
}
