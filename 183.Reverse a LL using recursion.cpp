#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
// node* reverseLL(node* curr,node* prev){
//     if(curr==NULL)return prev;  
//     node* next=curr->next;
//     curr->next=prev;
//     return reverseLL(next,curr);
// }
node* reverseLL(node* head){
    if(head==NULL||head->next==NULL)return NULL;
    node* rest_head=reverseLL(head->next);
    node* rest_tail=head->next;
    rest_tail->next=head;
    head->next=head;
    return rest_head;     
}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=NULL;
    node* ptr=head;
    cout<<"Before reverse: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    head=reverseLL(head);
    ptr=head;
    cout<<"\nAfter reverse: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
