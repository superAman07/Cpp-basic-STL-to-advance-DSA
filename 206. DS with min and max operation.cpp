#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
struct MyDS{
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
        int min=dq.front();
        dq.pop_front();
        return min;
    }
    int extractMax(){
        int max=dq.back();
        dq.pop_back();
        return max;
    }
};
int main(){
    MyDS ds;
    ds.insertMin(5);
    ds.insertMin(1);
    ds.insertMax(10);
    ds.insertMax(100);
    cout<<ds.getMin()<<endl; //1
    cout<<ds.getMax()<<endl; //100
    cout<<ds.extractMin()<<endl; //1
    cout<<ds.extractMax()<<endl; //100
    return 0;
}
