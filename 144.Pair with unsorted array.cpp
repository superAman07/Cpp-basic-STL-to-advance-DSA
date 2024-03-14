#include<iostream>
#include<algorithm>
using namespace std;
string pairWith(int arr[],int n,int z){
    for(int i=0;i<n;i++){
        int x = z-arr[i];
        if(find(arr,arr+n,x)!=arr+n){
            return "Yes";
        }
    }
    return "No";
}
int main(){
    int arr[]{1,2,3,4,5,6,7,8,9,10};
    int z = 21;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<pairWith(arr,n,z);
    return 0;
}
