//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int arr[ ][2] {{10,20},{30,40},{50,60}};  // we can omit 1st dimension of the array
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int arr[][2][2] {{10,20},{20,30},{30,40},{40,50}};
//    for(int i=0;i<4;i++){
//        for(int j=0;j<2;j++){
//            for(int k=0;k<2;k++){
//                cout<<arr[i][j][k]<<" ";
//            }
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int m=3,n=2;
//    int arr[m][n];
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            arr[i][j]=i+j;
//        }
//    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

   // Double pointer

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int m=3,n=2;
//    int **arr;
//    arr=new int*[m];
//    for(int i=0;i<m;i++){
//        arr[i]=new int[n];
//    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            arr[i][j]=10;
//            cout<<arr[i][j]<<" ";
//        }
//    }
//    return 0;
//}

   //Array  of pointer

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int m=3,n=2;
//    int *arr[m];
//    for(int i=0;i<m;i++){
//        arr[i]=new int[n];
//    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            arr[i][j]=10;
//            cout<<arr[i][j]<<" ";
//        }
//    }
//    return 0;
//}


     // Array of Vector

//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//    int m=3,n=2;
//    vector<int> arr[m];
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            arr[i].push_back(10);
//        }
//    }
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            cout<<arr[i][j]<<" ";
//        }
//    }
//    return 0;
//}

   // Vector of vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=3,n=2;
    vector<vector<int>>arr;
    for(int i=0;i<m;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            v.push_back(10);
        }
        arr.push_back(v);
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }

    }
    return 0;
}