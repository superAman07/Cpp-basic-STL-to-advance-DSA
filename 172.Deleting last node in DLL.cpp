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
node* DeleteLastEle(node* &head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    // node* ptr=head;
    // while(ptr->next->next!=NULL){
    //     ptr=ptr->next;
    // }
    // node*qtr=ptr->next;
    // delete qtr;
    // ptr->next=NULL;
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(45);
    node* fifth=new node(60);
    head->next=second;
    second->prev=head;  
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->prev=fourth;
    fifth->next=NULL;
    head=DeleteLastEle(head);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
