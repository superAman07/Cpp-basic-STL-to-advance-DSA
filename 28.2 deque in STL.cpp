#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    auto it = dq.begin();
    cout<<"Deque: ";
    while(it!=dq.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<"\n"<<"Size: "<<dq.size();
    cout<<"\n"<<"front: "<<dq.front()<<" back: "<<dq.back()<<"\n";
    dq.pop_front();
    dq.pop_back();
    cout<<"\n"<<"front: "<<dq.front()<<" back: "<<dq.back()<<"\n";
    auto i=dq.begin();
    dq.insert(i,7);
    it=dq.begin();
    cout<<"After insertion of 7: ";
    while(it!=dq.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
