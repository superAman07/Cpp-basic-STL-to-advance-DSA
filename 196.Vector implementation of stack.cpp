#include<iostream>
#include<vector>
using namespace std;
struct MyStack{
    vector<int>v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int x=v.back();
        v.pop_back();
        return x;
    }
    int peek(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
};
int main(){
    MyStack s;
    s.push(10);
    s.push(13);
    s.push(25);
    cout<<s.peek()<<"\n";
    cout<<"Is stack empty?: "<<boolalpha<<s.isEmpty()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.size()<<"\n";
    s.pop();
    cout<<s.peek()<<"\n"; 
    s.pop();
    cout<<"Is stack Empty?:"<<boolalpha<<s.isEmpty();
    return 0;
}
