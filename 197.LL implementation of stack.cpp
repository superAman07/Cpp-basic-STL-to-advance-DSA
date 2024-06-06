#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
struct MyStack{
    node* head;
    int sz;
    MyStack(){
        head=NULL;
        sz=0;
    }
    void push(int x){
        node* temp = new node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop(){
        if(head==NULL)return INT_MAX;
        int res=head->data;
        node* temp=head;
        head=head->next;
        delete temp;
        sz--;
        return res;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return head->data;
    }
};
int main(){
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Size:"<<st.size()<<"\n";
    cout<<"Top element:"<<st.peek()<<"\n";
    st.pop();
    cout<<"Top element:"<<st.peek()<<"\n";
    cout<<"Is stack empty:"<<boolalpha<<st.isEmpty()<<"\n";
    st.push(7);
    cout<<"Size:"<<st.size()<<"\n";
    cout<<"Top element:"<<st.peek()<<"\n";
    return 0;
}
