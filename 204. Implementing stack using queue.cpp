#include<iostream>
#include<queue>
using namespace std;
struct stack{
    queue<int>q1,q2;
    int top(){
        return q1.front();
    }
    void push(int x){
         while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
         }
         q1.push(x);
         while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
         }
    }
    void pop(){
        q1.pop();
    }
    int size(){
        return q1.size();
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<" "<<s.size()<<"\n";
    s.pop();
    cout<<s.top()<<" "<<s.size()<<'\n';
    s.push(40);
    cout<<s.top()<<" "<<s.size()<<"\n";
    s.push(60);
    cout<<s.top()<<" ";
    cout<<s.size()<<" ";
    return 0;
}
