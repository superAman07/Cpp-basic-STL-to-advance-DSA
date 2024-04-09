#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int a){
        data = a;
        next = NULL;
    }
};
void traversingSLL(node* head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }else{
        node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
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
    traversingSLL(head);
    return 0;
}
