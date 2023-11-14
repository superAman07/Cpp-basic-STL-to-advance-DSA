#include<bits/stdc++.h>
using namespace std;
deque<int>dq;
void insertMin(int x){
    dq.push_front(x);
}
void insertMax(int x){
    dq.push_back(x);
}
int getMin(){
    return dq.front();
}
int getMax(){
    return dq.back();
}
int extractMin(){
    return dq.pop_front();
}
int extractMax(){
    return dq.pop_back();
}
int main(){
    insertMin(7);
    insertMax(10);
    insertMin(5);
    extractMin();
    extractMax();
    insertMin(3);
    int x=getMin();
    int y=getMax();
    cout<<x<<" "<<y;
    return 0;
}