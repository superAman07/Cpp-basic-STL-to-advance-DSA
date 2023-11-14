#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(13);
    s.insert(13);
    for(auto x:s){
        cout<<x<<" ";    // order could be any permutation of (10,13,5,23)
    }
    return 0;
}

// begin, end ,size, clear

// #include<bits/stdc++.h>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(21);
//     s.insert(33);
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<(*it)<<" ";
//     }
//     cout<<"\n";
//     cout<<s.size()<<"\n";
//     s.clear();
//     cout<<s.size()<<"\n";
//     return 0;
// }/

  // find

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(17);
//     s.insert(7);
//     s.insert(13);
//     s.insert(32);
//     auto it=s.find(13);
//     if(it==s.end()){
//         cout<<"Not Found\n";
//     }
//     else{
//         cout<<"Found"<<" "<<(*it);
//     }
//     return 0;
// }

   // count

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(25);
//     s.insert(6);
//     s.insert(21);
//     s.insert(13);
//     cout<<s.size()<<'\n';
//     s.insert(13);
//     cout<<s.size()<<"\n";
//     if(s.count(13)){
//         cout<<"found\n";
//     }
//     else{
//         cout<<"Not found\n";
//     }
//     // auto it=s.count(21);     // we can use to store it them check...
//     // if(it){
//     //     cout<<"Found\n";
//     // }
//     // else{
//     //     cout<<"not found\n";
//     // }
//     return 0;
// }

  // erase

// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(19);
//     s.insert(5);
//     s.insert(6);
//     s.insert(14);
//     cout<<"size "<<s.size()<<"\n";
//     cout<<"Before erase\n";
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     // s.erase(14);
//     s.erase(s.begin(),s.end());
//     cout<<"\nAfter Erase\n";
//     cout<<"size "<<s.size()<<"\n";
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }

  