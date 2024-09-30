//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int arr[] {10,20,30};
//    int *ptr=arr;
//    cout<<sizeof(arr)<<"\n";
//    cout<<sizeof(ptr)<<"\n";
//    cout<<*(arr+2)<<"\n";
//    cout<<ptr[2]<<"\n";
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] {10,20,30};
    int *p1=arr;
    int (*p2)[3] = &arr;
    cout<<*p1<<"\n";
    cout<<**p2<<"\n";
    *p1++;
    *p2++;
    cout<<*p1<<" "<<*p2<<"\n";
    return 0;
}