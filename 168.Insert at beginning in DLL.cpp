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
// node* insertAtBegInDLL(node*&head,int data){
//     node*ptr=new node(data);
//     if(head==NULL){
//         return ptr;
//     }
//     else{
//         ptr->next=head;
//         head->prev=ptr;
//         head==ptr;
//         return head;
//     }
// }
node* insertAtBegInDLL(node*&head,int data){
    node*ptr=new node(data);
    ptr->next=head;
    if(head!=NULL){
        head->prev=ptr;
    } 
    head=ptr;
    return head;
}
int main(){
    int data = 5;
    node*head=new node(10);
    node*second=new node(20);
    node*third=new node(30);
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    insertAtBegInDLL(head,data);
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
