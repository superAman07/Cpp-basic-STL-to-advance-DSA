// #include<iostream>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v{10,7,15,12,30};
//     // make_heap(v.begin(),v.end());//by default it works as max_heap;
//     make_heap(v.begin(),v.end(),greater<int>());// it works as min_heap;
//     cout<<v.front();
//     return 0;
// }

// make_heap and sort_heap

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{10,7,15,12,30};
//     // make_heap(v.begin(),v.end(),greater<int>());
//     // sort_heap(v.begin(),v.end(),greater<int>());
//     make_heap(v.begin(),v.end());
//     sort_heap(v.begin(),v.end());
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }

  // make_heap and pop_heap

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{15,6,7,12,30};
    make_heap(v.begin(),v.end(),greater<int>());
    cout<<"make_heap= "<<v.front()<<"\n";
    pop_heap(v.begin(),v.end(),greater<int>());
    cout<<"pop_heap = "<<v.front()<<"\n";
    v[4]=2;
    push_heap(v.begin(),v.end(),greater<int>());
    cout<<"push_heap= "<<v.front()<<"\n";
    return 0;
}