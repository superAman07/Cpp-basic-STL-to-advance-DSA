// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>m;
//     m.insert({"C++",10});
//     m["is"]=20;
//     m["Best"]=30;
//     // for(auto  x:m){
//     //     cout<<x.first<<" "<<x.second<<"\n";
//     // }
//     for(auto it=m.begin();it!=m.end();it++){
//         cout<<(it)->first<<" "<<it->second<<"\n";
//     }    
//     return 0;
// }

// other functions on unordered_map

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string, int>m;
//     m["Best"]=100;
//     m["is"]=200;
//     m["C++"]=400;
//     if(m.find("is")!=m.end()){
//         cout<<"Found\n";
//     }
//     else{
//         cout<<"Not found\n";
//     }
//     for(auto it=m.begin();it!=m.end();it++){
//         cout<<it->second<<" "<<it->first<<"\n";
//     }
//     return 0;
// }

  // count functions(if element is present return true else false)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_map<string, int>m;
//     m.insert({"Best",100});
//     m.insert({"is",530});
//     m.insert({"C++",230});
//     if(m.count("C++")>0){
//         cout<<"Found\n";
//     }
//     else{
//         cout<<"Not Found\n";
//     }
//     return 0;
// }

  // size and erase function

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    m.insert({"Best",712});
    m.insert({"is",728});
    m.insert({"Development",272});
    m.insert({"Game",392});
    cout<<m.size()<<"\n";
    m.erase("is");
    cout<<m.begin()->first<<" is going to snapped\n";
    m.erase(m.begin()); // m.erase(m.begin(),m.end());
    cout<<m.size()<<"\n";
    return 0;

}