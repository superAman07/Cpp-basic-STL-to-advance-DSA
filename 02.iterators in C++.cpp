     // begin()-end() function

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v {10,20,30,40,70};
//     vector<int>::iterator i=v.begin();
//     cout<<(*i)<<"\n";
//     i+=1;
//     cout<<(*i)<<"\n";
//     i=v.end();
//     i--;
//     cout<<(*i)<<"\n";
//     return 0;
// }
     
     //next()-prev() function

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v {10,20,30,40,70};
//     auto i=v.begin();
//     i=next(i);
//     cout<<(*i)<<"\n";
//     i+=2;
//     cout<<(*i)<<"\n";
//     i=prev(i);
//     cout<<(*i)<<"\n";
//     return 0;
// }

     // advance() function

#include<iostream>
#include<vector>
using namespace  std; 
int main(){
    vector<int>v {10,20,30,27,70};
    vector<int>::iterator i=v.begin();
    advance(i,3);
    cout<<(*i)<<"\n";
    return 0;
}
