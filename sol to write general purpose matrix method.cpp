  // Double Pointer

//#include<bits/stdc++.h>
//using namespace std;
////void fun(int **arr,int m, int n){
////    for(int i=0;i<m;i++){
////        for(int j=0;j<n;j++){
////            cout<<arr[i][j]<<" ";
////        }
////        cout<<"\n";
////    }
////}
//int main(){
//    int m=3,n=2;
//    int **arr=new int*[m];
//    for(int i=0;i<m;i++){
//        arr[i]=new int[n];
//        for(int j=0;j<n;j++){
//            arr[i][j]=i;
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

    // Using Array of Pointer

//#include<bits/stdc++.h>
//using namespace std;
////void fun(int *arr[], int m,int n){
////    for(int i=0;i<m;i++){
////        for(int j=0;j<n;j++){ 
////            cout<<arr[i][j]<<" ";
////    }
////        cout<<"\n";
////    }
////}
//int main(){
//    int m=3,n=2;
//    int *arr[m];                          // Array of pointer
//    for(int i=0;i<m;i++){
//        arr[i]=new int[n];
//        for(int j=0;j<n;j++){
//            arr[i][j]=i;
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    return 0;
//
//}

    // Array of vector 

//#include<bits/stdc++.h>
//using namespace std;
//void fun(vector<int>arr[],int m){
//    for(int i=0;i<m;i++){
//        for(int j=0;j<arr[i].size();j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//}
//int main(){
//    int m=3;int n=2;
//    vector<int> arr[m];
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            arr[i].push_back(i);
//        }
//    }
//    fun(arr,m);
//    return 0;
//}

   // Vector of Vector

#include<bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int m=3;int n=2;
    vector<vector<int>>arr;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            v.push_back(i);
        }
        arr.push_back(v);
    }
    fun(arr);
    return 0;

}