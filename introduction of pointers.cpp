//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x=10;
//    int *p;
//    p=&x;
//    cout<<x<<" "<<p<<" "<<*p<<"\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x=10;
//    int *ptr=&x;
//    cout<<*ptr<<"\n";
//    x=x+30;
//    cout<<*ptr<<"\n";
//    *ptr+=40;
//    cout<<x<<"\n";
//    return 0;
//
//
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    double *ptr1;
    string *ptr2;
    float *ptr3;
    cout<<sizeof(ptr)<<"\n";
    cout<<sizeof(ptr1)<<"\n";
    cout<<sizeof(ptr2)<<"\n";
    cout<<sizeof(ptr3)<<"\n";              // answer of all outputs is same bqz pointer stores the addresses and the size of addresses have same size whether it's int , float, double,etc
    return 0;
}