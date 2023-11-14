// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<int,int>mp;  // for decreasing order use greater<int ,int>
//     mp.insert({10,500});
//     mp.insert({30,200});
//     mp.insert({10,100});
//     for(auto x:mp){
//         cout<<x.first<<" "<<x.second<<"\n";
//     }
//     return 0;
// }

    // count and erase

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<int,int>mp;
//     mp.insert({10,200});
//     mp.insert({50,800});
//     mp.insert({10,600});
//     cout<<mp.count(10)<<"\n";
//     mp.erase(10);
//     cout<<mp.count(10);
//     return 0;
// }

     // Lower_bound and upper_bound

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     multimap<int,int>mp;
//     mp.insert({10,137});
//     mp.insert({30,157});
//     mp.insert({80,132});
//     mp.insert({30,937});
//     auto it1=mp.lower_bound(30);//multiset<int,int>::iterator it1;
//     auto it2=mp.upper_bound(30);
//     cout<<it1->first<<" "<<(*it2).first<<"\n";
//     return 0;
// }

     // equal_range

#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,int>mp;
    mp.insert({10,253});
    mp.insert({29,391});
    mp.insert({10,572});
    mp.insert({90,207});
    auto it=mp.equal_range(10);// pair<multimap<int,int>::iterator,multimap<int,int>::iterator>
    for(auto itr=it.first;itr!=it.second;itr++){
        cout<<itr->first<<" "<<itr->second<<"\n";
    }
    return 0;
}