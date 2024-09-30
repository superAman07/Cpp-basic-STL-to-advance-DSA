//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x,y;
//    cin>>x>>y;
//    try{
//        if(y==0){
//            throw 0;
//        }
//        cout<<"Result is "<<x/y;
//    }
//    catch(int x){
//        cout<<"Divisor is zero.";
//    }
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    try{
        if(x==0){
            throw 0;
        }
        if(y==0){
            throw string("Denominator is zero");
        }
        if(x+y<0){
            throw (x+y);
        }
        cout<<x/y<<" ";
    }
    catch(int a){
        cout<<a<<"\n";
    }
    catch(string &b){
        cout<<b<<"\n";
    }
    catch(...){                     // 3 dot is for all remaining data types here it is for double;
        cout<<"x+y is less than 0\n";
    }
    cout<<"Done👍\n";
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int average(int arr[], int n){
//    if(n==0){
//        throw string("array size is zero\n");
//    }
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum+=arr[i];
//    }
//    return sum/n;
//}
//int main(){
//    int arr[] {2,3,4,5};
//    int n=4;
//    try{
//        int result=average(arr,n);
//        cout<<result<<"\n";
//    }
//    catch(string &s){
//        cout<<s;
//    }
//    cout<<"Done👍...";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int average(int arr[], int n) throw(string){
//    if(n==0){
//        throw string("array size is zero\n");
//    }
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum+=arr[i];
//    }
//    return sum/n;
//}
//int main(){
//    int arr[] {2,3,4,5};
//    int n=4;
//    try{
//        int result=average(arr,n);
//        cout<<result<<"\n";
//    }
//    catch(string &s){
//        cout<<s;
//    }
//    cout<<"bye...";
//    return 0;
//}