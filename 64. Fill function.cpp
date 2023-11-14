// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{23,14,16,29,37};
//     fill(v.begin(),v.end(),7);         // 7 7 7 7 7
//     // fill(v.begin()+2,v.end()-1,7);  // 23 14 7 7 37
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]{23,14,16,29,37};
//     // fill(arr,arr+5,7);  // 7 7 7 7 7
//     fill(arr+2,arr+5-1,7);  // 23 14 7 7 37
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

   // list

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l{23,14,16,29,37};
//     fill(l.begin(),l.end(),7);//7 7 7 7 7
//     // fill(l.begin()+2,l.end(),7);   // we cannot modify
//     for(auto i:l){
//         cout<<i<<' ';
//     }
//     return 0;
// }

   // string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s={"hello Vegeta"};
    // fill(s.begin(),s.end(),'G'); //  GGGGGGGGGGGG
    fill(s.begin()+6,s.end(),'G');// hello GGGGGG
    cout<<s<<"\n";
    return 0;
}