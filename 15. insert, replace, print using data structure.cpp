#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
list<int>l;
void insert(int x){
    l.push_back(x);
}
void print(){
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<"\n";
}
void replace(int x,vector<int>&seq){
    auto it=find(l.begin(),l.end(),x);
    if(it==l.end()){
        return;
    }
    it=l.erase(it);
    l.insert(it,l.begin(),l.end());
}
int main(){
    insert(10);
    insert(17);
    insert(27);
    insert(28);
    print();
    vector<int>seq{7,8,2};
    replace(17,seq);
    print();
    return 0;
}