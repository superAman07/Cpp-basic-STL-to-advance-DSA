#include<iostream>
#include<stack>
using namespace std;
int main(){
    int x;
    stack<int>ms;   //main stack
    stack<int>as;   //auxilary stack
    ms.push(5);
    ms.push(10);
    ms.push(20);
    ms.push(2);
    ms.push(6);
    ms.push(4);
    ms.pop();
    ms.pop();
    ms.push(2);
    ms.pop();
    ms.push(1);
    ms.pop();
    ms.pop();
    ms.push(x);
    if(as.top()>=ms.top()){
        as.push(x);
    }
    if(as.top()==ms.top()){
        as.pop();
    }
    ms.pop();
    cout<<ms.top()<<" "<<as.top();
    return 0;
}