// #include<bits/stdc++.h>
// #include<set>
// using namespace std;
// int main(){
//     multiset<int>ms;
//     ms.insert(10);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(50);
//     for(auto x:ms){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     multiset<int>ms;
//     ms.insert(10);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(50);
//     ms.erase(10);
//     for(auto x:ms){
//         cout<<x<<" ";
//     }
//     return 0;
// }
 
     // count

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     multiset<int>ms;
//     ms.insert(10);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(60);
//     cout<<ms.count(10);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     multiset<int>ms;
//     ms.insert(10);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(50);
//     auto it=ms.lower_bound(20);
//     auto it1=ms.upper_bound(20);
//     cout<<*it<<" "<<*it1;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(10);
    ms.insert(30);
    ms.insert(10);
    ms.insert(50);
    auto it=ms.equal_range(30);
    cout<<*it.first<<" "<<*it.second;
    return 0;
}