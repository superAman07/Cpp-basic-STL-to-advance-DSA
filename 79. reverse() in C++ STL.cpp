// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{10,20,30,40,50};
//     // reverse(v.begin(),v.end());
//     reverse(v.begin()+2,v.end());
//     for(auto i:v){
//         cout<<i<<" ";   
//     }
//     return 0;
// }

// same in array

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]{10,20,30,40,50,60};
//     // reverse(arr,arr+6);
//     reverse(arr+3,arr+6);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// in string also

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="Vegeta";
    // reverse(s.begin(),s.end());
    reverse(s.begin()+2,s.end());
    cout<<s;
    return 0;
}