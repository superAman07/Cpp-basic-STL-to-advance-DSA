// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<numeric>
// using namespace std;
// int main(){
//     vector<int>v{10,20,13,17};
//     int initial=100;
//     cout<<accumulate(v.begin(),v.end(),initial);
//     // cout<<accumulate(v.begin(),v.end(),initial,minus<int>);
//     return 0;
// }

// #include<numeric>
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]{112,312,53,192,100};
//     int initial=1000;
//     // cout<<accumulate(arr,arr+5,initial,minus<int>);
//     cout<<accumulate(arr,arr+5,initial);
//     return 0;
// }

//we can pass our own function

// #include<bits/stdc++.h>
// using namespace std;
// int myfun(int x,int y){
//     return x*y;
// }
// int main(){
//     vector<int>v{10,20,30};
//     int initial=1;
//     cout<<accumulate(v.begin(),v.end(),initial,myfun);
//     return 0;
// }