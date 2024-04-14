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
node* insertAtLastInDLL(node* &head,int data){
    node* ptr=new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    return head;
}
int main(){
    int data=40;
    node* head=new node(10);
    head->next=new node(20);    
    head->next->next=new node(30);
    insertAtLastInDLL(head,data);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
