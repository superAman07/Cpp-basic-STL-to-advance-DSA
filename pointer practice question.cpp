//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int a[] {10,20,30};
//    int *ptr=a;
//    cout<<sizeof(a)<<"\n";
//    cout<<sizeof(ptr)<<"\n";        // size of pointer is same for all type...
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    char a[] {'a','n','t'};
//    char *ptr=a;
//    cout<<sizeof(a)<<"\n";
//    cout<<sizeof(ptr);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//    int arr[] {10,20};
//    int *ptr=arr;
//    ++*ptr;
//    cout<<arr[0]<<"\n";
//    cout<<arr[1]<<"\n";
//    cout<<*ptr;
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int arr[] {10,20};
//    int *ptr=arr;
//    *++ptr;
//    cout<<arr[0]<<"\n";
//    cout<<arr[1]<<"\n";
//    cout<<ptr;
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] {10,20};
    int *ptr=arr;
    *ptr++;
    cout<<arr[0]<<"\n";
    cout<<arr[1]<<"\n";
    cout<<*ptr;
    return 0;
}