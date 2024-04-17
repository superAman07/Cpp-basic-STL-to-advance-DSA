#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
// node *RemoveFirstDLL(node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     node* ptr=head;
//     ptr= ptr->next;
//     if(ptr!=NULL){
//         ptr->next->prev=NULL;
//     }
//     delete(head); 
//     return ptr;
// }
node* RemoveFirstDLL(node*head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }else{
        node*ptr=head;
        head=head->next;
        head->prev=NULL;
        delete ptr;
        return head;
    }
}
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    head->prev=NULL;
    head->next=second;
    second->next=third;
    second->prev=head;
    third->next=fourth;
    third->prev=second;
    fourth->next=NULL;
    fourth->prev=third;
   head= RemoveFirstDLL(head);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
