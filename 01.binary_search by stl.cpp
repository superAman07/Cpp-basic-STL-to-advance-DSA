#include<iostream>
#include<algorithm>
using namespace std;
void binary_fun(int arr[],int n){
    sort(arr,arr+5);
    if(binary_search(arr,arr+5,n)){
        cout<<"Present\n";
    }
    else{
        cout<<"Not Present\n";
    }
}
int main(){
    int arr[]{23,42,1,63,27,31};
    int n=28;
    binary_fun(arr,n);
    return 0;
}
