//#include<bits/stdc++.h>
//using namespace std;
//int add(int a,int b){
//    return a+b;
//}
//int multiply(int a,int b){
//    return a*b;
//}
//int compute(int a,int b,int (*fun_ptr)(int,int)){
//    return fun_ptr(a,b);
//}
//int main(){
//    cout<<compute(10,17,&add)<<"\n";
//    cout<<compute(10,17,&multiply);
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int arr[] {2,3,0,-2,-7};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    sort(arr,arr+n);
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
bool compare(int x,int y){
    return abs(x)<abs(y);
}
int main(){
    int arr[] {2,4,-1,8,-9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}