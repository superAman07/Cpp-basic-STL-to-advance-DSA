#include<iostream>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
    node(int x){
        data = x;
        prev=NULL;
        next=NULL;
    }
};
int main(){
    node* head= new node(10);
    node* second=new node(20);
    node* third=new node(30);
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    third->next=NULL;
    node*ptr=head;
    cout<<"NULL<==>";
    while(ptr!=NULL){
        cout<<ptr->data<<"<==>";
        ptr=ptr->next;
    }
    cout<<"NULL";
    return 0;
}
