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
node* insertInSortedOrder(node* head,int z){
    node* ptr=new node(z);
    if(head==NULL){
        head=ptr;
        return head;
    }
    if(head->data>z){
        ptr->next=head;
        head=ptr;
        return head;
    }
    node*curr=head;
    while(curr->next!=NULL&&curr->next->data<z){
        curr=curr->next;
    }
    ptr->next=curr->next;
    curr->next=ptr;
    return head;
}
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    head=insertInSortedOrder(head,15);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
