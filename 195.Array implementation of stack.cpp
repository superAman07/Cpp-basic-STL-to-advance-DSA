#include<iostream>
using namespace std;
struct MyStack{
    int *arr;
    int capacity;
    int top;
    MyStack(int c){
        capacity=c;
        arr=new int [capacity];
        top=-1;
    }
    void push(int x){
        if(top==capacity-1){
            //stack overflow
            cout<<"Stack overflow\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){
            //stack underflow
            cout<<"Stack underflow\n";
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1){
            //stack underflow
            cout<<"Stack underflow\n";
            return -1;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    MyStack s(10);
    s.push(10);
    s.push(23);
    s.push(35);
    cout<<"Size: "<<s.size()<<"\n";
    cout<<"Top: "<<s.peek()<<"\n";
    cout<<"Removed: "<<s.pop()<<"\n";
    s.push(43);
    cout<<"Top: "<<s.peek()<<"\n";
    cout<<"is empty: "<<boolalpha<<s.isEmpty()<<"\n";
    return 0;
}
