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
node* InsertAtHead(node* head,int x){
    node* ptr=new node(x);
    if(head==NULL){
        ptr->next=ptr;
        ptr->prev=ptr;
        return ptr;
    }else{
        ptr->next=head;
        ptr->prev=head->prev;
        head->prev->next=ptr;
        head->prev=ptr;
        head=ptr;
        return head;
    }
}
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    head->prev=fourth;
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=head;
    head=InsertAtHead(head,3);
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
