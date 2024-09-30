// for latern
#include<bits/stdc++.h>
using namespace std;
int distinct(int arr[],int n){
    int count=0;
    bool distinctNos=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                distinctNos = false;
                break;
            } 
        }
        if(distinctNos==true){
            count+=1;
        }
    }
    return count;
}
int main(){
    int n,c=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    distinct(arr,n);
    return 0;

}