#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node*prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
// void ReverseDLL(node*head){
//     node* temp=head;
//     if(head==NULL){
//         return;
//     }
//     cout<<"Forward DLL: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"\n"<<"Reverse DLL: ";
//     node *ptr=head;
//     while(ptr->next!=NULL){
//         ptr=ptr->next;
//     }
//     while( ptr!=NULL){
//         cout<< ptr->data<<" ";
//          ptr= ptr->prev;
//     }
// }
node *reverseDLL(node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}
int main(){
    node *head=new node(10);
    node *first=new node(20);
    node *second=new node(30);
    node *third=new node(40);
    head->next=first;
    first->prev=head;
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=NULL;
    head=reverseDLL(head);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
