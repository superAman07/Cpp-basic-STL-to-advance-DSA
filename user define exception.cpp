//#include<bits/stdc++.h>
//using namespace std;
//class arraySizeZeroException{};
//class arraySizeNegativeException{};
//int average(int arr[],int n){
//    if(n==0){
//        throw arraySizeZeroException();
//    }
//    if(n<0){
//        throw arraySizeNegativeException();
//    }
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum+=arr[i];
//    }
//    return sum/n;
//}
//int main(){
//    int n;
//    cin>>n;
//    int *arr=new int(n);
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    try{
//        int res=average(arr,n);
//        cout<<res<<"\n";
//    }
//    catch(arraySizeZeroException &a){
//        cout<<"Array size is zero\n";
//    }
//    catch(arraySizeNegativeException &b){
//    cout<<"Array size is negative\n";
//    }
//    return 0;
//}

#include<iostream>
#include<exception>
using namespace std;
class MyException:public exception{
    virtual const char *what() const throw(){
        return "exception occured\n";  
    }
};
int main(){
    try{
        throw MyException(); 
    }
    catch(exception &e){
        cout<<e.what()<<"\n";
    }
    return 0;
}