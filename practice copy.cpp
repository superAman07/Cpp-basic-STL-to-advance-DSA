//#include<bits/stdc++.h>
//using namespace std;
//struct complxNo{
//    int real, imag;
//};
//int main(){
//    complxNo s1,s2,s3;
//    cin>>s1.real>>s1.imag;
//    cin>>s2.real>>s2.imag;
//    s3.real=s1.real+s2.real;
//    s3.imag=s1.imag+s2.imag;
//    cout<<s3.real<<"+i"<<s3.imag;
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//struct complxNo{
//    int real,imag;
//};
//int main(){
//    complxNo n1,n2,n3;
//    cin>>n1.real>>n1.imag;
//    cin>>n2.real>>n2.imag;
//    n3.real=n1.real+n2.real;
//    n3.imag=n1.imag+n2.imag;
//    cout<<n3.real<<" "<<n3.imag<<"\n";
//    return 0;
//
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//    // Complete the code.
//    int a,b;
//    cin>>a>>b;
//    string str[9]={"one","two","three","four","five","six","seven","eight","nine"};
//    for(int i=a;i<=9;i++){
//        cout<<str[i-1]<<"\n";
//    }
//    for(int i=a;i<=9;i++){
//        if(i%2==0){
//            cout<<"even"<<"\n";
//        }
//        else{
//            cout<<"odd"<<"\n";
//        }
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//    int a,b;
//    vector<string>arr;
//    arr.push_back("zero");
//    arr.push_back("one");
//    arr.push_back("two");
//    arr.push_back("three");
//    arr.push_back("four");
//    arr.push_back("five");
//    arr.push_back("six");
//    arr.push_back("seven");
//    arr.push_back("eight");
//    arr.push_back("nine");
//    cin>>a>>b;
//    for(int i=a;i<=b;i++){
//        if(i>9){
//            if(i%2==0){
//                cout<<"even"<<"\n";
//            }
//            else{
//                cout<<"odd"<<"\n";
//            }
//        }
//        else{
//            cout<<arr[i]<<"\n";
//        }
//    }
//    return 0;
//
//}

//#include<bits/stdc++.h>
//using namespace std;
//int max(int a,int b,int c,int d){
//    int maximum=max(max(a,b),max(c,d));
//    return maximum;
//}
//int main(){
//    int a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int maxi=max(a,b,c,d);
//    cout<<maxi<<"\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    cin>>t;
//    int t;
//        int x,y,z;
//    while(t--){
//        int d=(x*5+y*10)/z;
//        cin>>x>>y>>z;
//    }
//        cout<<d<<"\n";
//        return 0;
//}
    
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     float a=0.5,b=0.05;
//     cout<<a+b;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int arr[]){
//     // cout<<end(arr)-begin(arr)<<endl;
//     // cout<<sizeof(arr[0])<<endl;
//     // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//     //cout<<arr[50];
//     // int count=0;
//     // for(int i=0;arr[i]!='\0';i++){
//     //     cout<<arr[i+1]<<endl;
//     //     count++;
//     // }  
//     // cout<<"now"<<endl;
//     // cout<<count<<"\n";

// }
// int main(){
//     int arr[]= {2,3,4,7,0,9,90,3,4};
//     fun(arr);
//    //  cout<<end(arr)-begin(arr)<<endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<sizeof(nums);i++){
//          if((nums[i]+nums[i+1])==target){
//                 cout<<"["<<i<<","<<i+1<<"]";
//             }
//      }
//     }
// };
// int main(){
//      Solution twoSum;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int attendence;  
    int placement_guarentee;   
    cin>>attendence>>placement_guarentee;
    try{
        if(attendence == placement_guarentee){
            throw string("Regular");
        }
        else{
             throw string("Go to Hell");
        }
    }
    catch (string &a){
        cout<<a<<" ";
    }
    return 0;
}