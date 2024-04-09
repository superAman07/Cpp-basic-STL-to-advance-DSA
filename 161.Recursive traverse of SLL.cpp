#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
node* recursive(node* head){
    if(head==NULL){
        return head;
    }   
    cout<<head->data<<" ";
    return recursive(head->next);
}
int main(){
    node* head = new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    recursive(head);
    return 0;
}
