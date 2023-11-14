#include<bits/stdc++.h>
using namespace std;
map<int,string>m;
void add(int price, string item){
    // m.insert({price,item});
    m[price]=item;            //O(log(n))
}
// void find(int price){
//     auto it=m.find(price);
//     cout<<(*it).second<<"\n";
// }
string find(int price){             //O(log(n))
    auto res=m.find(price);
    if(res==m.end()){
        return " ";
    }
    else{
        return res->second;
    }
}
void printSorted(){            // theta(n)
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<(*it).second<<" "<<(*it).first<<"\n";
    // }
    for(auto x:m){
        cout<<x.second<<" "<<x.first<<"\n";
    }
}
void printGreaterSorted(int price){          // O(n)
    cout<<"Greater\n";
    auto it=m.upper_bound(price);
    while(it!=m.end()){
        cout<<it->second<<" "<<it->first<<"\n";
        it++;
    }
}
void smallerSorted(int price){            //O(n)
    cout<<"Smaller\n";
    auto it1=m.lower_bound(price);
    for(auto it2=m.begin();it2!=it1;it2++){
        cout<<(*it2).second<<" "<<(*it2).first<<"\n";
    }
}
int main(){
    m.insert({10,"abc"});
    m.insert({100,"pqr"});
    m.insert({5,"xyz"});
    add(1,"Vegeta");
    // find(5);
    // printSorted();
    // printGreaterSorted7);
    smallerSorted(7);
    return 0;
}