//DP but not efficient O(n²) time and space is O(n)
// #include<iostream>
// using namespace std;
// int LIS(int arr[],int n){
//     int lis[n];
//     lis[0]=1;
//     for(int i=1;i<n;i++){
//         lis[i]=1;
//         for(int j=0;j<i;j++){
//             if(arr[j]<arr[i])lis[i]=max(lis[i],lis[j]+1);
//         }
//     }
//     int res=lis[0];
//     for(int i=0;i<n;i++){
//         res=max(res,lis[i]);
//     }
//     return res;
// }
// int main(){
//     int arr[]{3,4,2,8,10,5,1}; 
//     cout<<LIS(arr,7);
//     return 0;
// }

//efficient solution using binary search in nlogn
#include<iostream>
using namespace std;
int ceilIdx(int tail[],int l,int r,int x){
    while(r>l){
        int m=l+(r-l)/2;
        if(tail[m]>=x){
            r=m;
        }else{
            l=m+1;
        }
    }
    return r;
}
int LIS(int arr[],int n){
    int tail[n],len=1;
    tail[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>tail[len-1]){
            tail[len++]=arr[i];
        }else{
            int idx=ceilIdx(tail,0,len-1,arr[i]);
            tail[idx]=arr[i];
        }
    }
    return len;
}
int main(){
    int arr[]{3,4,2,8,10,5,1}; 
    cout<<LIS(arr,7);
    return 0;
}
