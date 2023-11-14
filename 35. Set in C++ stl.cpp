// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     // set<int>s;   // by default order of set is increasing order...
//     set<int,greater<int>>s;  // with the help of greater in set we can reverse the order 
//     s.insert(5);             //of set i.e., in decreasing order...
//     s.insert(10);
//     s.insert(20);
//     for(auto x:s){
//         cout<<x<<" ";
//     }
//     return 0;
// }

       // Using Iterator

// #include<bits/stdc++.h>
// #include<set>
// using namespace std;
// int main(){
//     // set<int>s;
//     set<int,greater<int>>s;
//     s.insert(5);
//     s.insert(10);
//     s.insert(20);
//     for(auto it=s.begin();it!=s.end();it++){   //insted of this we can use set<int>::iterator;
//         cout<<*it<<" ";
//     }
//     return 0;
// }

    // case of duplicate elements in set

// #include<bits/stdc++.h>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(10);
//     s.insert(20);
//     s.insert(5);     // set ignore the duplicate elements...
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(10);
//     s.insert(20);
//     auto it=s.find(1);
//     if(it==s.end()){
//         cout<<"not found\n";
//     }
//     else{
//         cout<<"found\n";
//     }
//     while(it!=s.end()){
//         cout<<*it<<" ";
//         it++;
//     }
//     return 0;
// }

    // clear()

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(30);
//     s.insert(20);
//     s.clear();
//     for(auto x:s){
//         cout<<x<<" 0 ";
//     }
//     return 0;
// }

// erase

#include<bits/stdc++.h>
using namespace std;
int main(){
    // set<int>s;
    set<int,greater<int>>s;
    s.insert(5);
    s.insert(20);
    s.insert(40);
    s.insert(50);
    s.erase(30);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
