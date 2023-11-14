  // Sorting array according to other 

#include<bits/stdc++.h>
#include<utility>
using namespace std;
void sort_arr_wrt_other(int arr1[],char arr2[],int n){
    pair<int,char>parr[n];
    for(int i=0;i<n;i++){
        parr[i]={arr1[i],arr2[i]};
    }
    sort(parr,parr+n);
    for(int i=0;i<n;i++){
        cout<<parr[i].second<<" ";
    }
}
int main(){
    int n=3;
    int arr1[]{3,1,2};
    char arr2[]{'G','E','K'};
    sort_arr_wrt_other(arr1,arr2,n);
    return 0;
}