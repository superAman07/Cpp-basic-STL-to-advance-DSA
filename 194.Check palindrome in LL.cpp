#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
// Naive solution
bool isPalindromeNaive(node* head){
    stack<char>st;
    for(node* curr=head;curr!=NULL;curr=curr->next){
        st.push(curr->data);
    }
    for(node* curr=head;curr!=NULL;curr=curr->next){
        if(st.top()!=curr->data){
            return false;
        }
        st.pop();
    }
    return true;
}
int main(){
    node* head=new node('c');
    head->next=new node('i');
    head->next->next=new node('v');
    head->next->next->next=new node('i');
    head->next->next->next->next=new node('c');
    cout<<boolalpha<<isPalindromeNaive(head);
    return 0;
}
