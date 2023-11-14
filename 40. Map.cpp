// #include<iostream>
// #include<set>
// #include<map> 
// using namespace std;
// int main(){
//     map<int,int>m;
//     m.insert({10,200});
//     m[20]=300;
//     m.insert({30,400});
//     // m.insert({30,500});
//     for(auto &x:m){
//         cout<<x.first<<" "<<x.second<<"\n";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int>m;
//     m.insert({10,100});
//     cout<<m.size()<<"\n";
//     cout<<m[20]<<" \n";
//     cout<<m.size();
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int>m;
//     m.insert({10,200});
//     cout<<m.size()<<"<-- size \n";
//     m.at(20)=300;  //m[20]=300;
//     cout<<m.size();
//     return 0;
// }

       // find()
    
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m.insert({10,"best"});
//     m.insert({5," is "});
//     m.insert({1," C++ "});
//     // if(m.find(3)==m.end()){
//     //     cout<<"Not Found\n";
//     // }
//     // else{
//     //     cout<<"Found\n";
//     // }
//     for(auto it=m.find(5);it!=m.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<"\n";
//     }
//     return 0;
// }

         // Lower bound

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m.insert({1,"Such "});
//     m.insert({2,"a "});
//     m.insert({5,"drag"});
//     m.insert({6,"..."});
//     // auto it=m.lower_bound(2);    // 2 a
//     // auto it=m.lower_bound(3);   // 5 drag
//     auto it=m.lower_bound(7);     
//     if(it!=m.end()){
//         cout<<(*it).first<<" "<<(*it).second;
//     }
//     else{
//         cout<<"No equal or greater value ";
//     }
//     return 0;
// }


        // upper_bound

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // map<int,string>m;
//     map<int,string ,greater<int>>m;
//     m.insert({5,"Such"});
//     m.insert({3,"a"});
//     m.insert({1,"drag..."});
//     // auto it=m.upper_bound(1);
//     // auto it=m.upper_bound(5);
//     auto it=m.upper_bound(3);
//     if(it!=m.end()){
//         cout<<(*it).first<<" "<<(*it).second<<"\n";
//     }
//     else{
//         cout<<"No greater value";
//     }
//     return 0;
// }

   // erase 

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m.insert({2,"a"}); 
    m.insert({1,"Such"}); 
    m.insert({5,"drag..."});
    cout<<m.size()<<" <---Before \n";
    // m.erase(5);
    // m.erase(m.find(5));
    m.erase(m.find(2),m.end());
    cout<<m.size()<<" <---After erase";
    return 0; 
}