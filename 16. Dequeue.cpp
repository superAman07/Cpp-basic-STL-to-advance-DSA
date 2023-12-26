#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq{10,17,27};
    dq.push_front(5);
    dq.push_back(28);
    for(auto x:dq){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq{10,17,27,28};
    auto it=dq.begin();
    it++;
    dq.insert(it,7);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size();
    return 0;
}
