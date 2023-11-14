#include<bits/stdc++.h>
using namespace std;
template<typename T>
T arrmax(T arr[],int n){
    T res=arr[0];
    for (int i = 1; i < n; i++){
        if(res<arr[i]){
            res=arr[i];
        }
    }
    return res;
}
int main(){
    int arr1[]{12,31,27,28};
    cout<<arrmax<int>(arr1,4)<<"\n";
    float arr2[]{2.3,1.1,2.7,2.1};
    cout<<arrmax<float>(arr2,4);
    return 0;
}