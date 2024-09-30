#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] {10,20,30,40};
    int *ptr=a;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr++;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr--;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr=ptr+3;
    cout<<*ptr<<" "<<ptr<<"\n";
    ptr=ptr-2;
    cout<<*ptr<<" "<<ptr<<"\n";
    int *ptr1=a;
    int *ptr2=ptr1+3;
    cout<<*ptr2<<" "<<ptr2<<"\n";
    cout<<(ptr2-ptr1)<<"\n";

    return 0;
}