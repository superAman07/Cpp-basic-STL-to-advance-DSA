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
node* insertAtLast(node* &head,int x){
    node* temp=new node(x);
    if(head->next==head){
        head->next=temp;
        temp->next=head;
        return head;
    }
    node* ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    return head;
}
int main(){
  node* head=new node(10);  
  node* second=new node(30);  
  node* third=new node(40);  
  node* fourth=new node(50);
  head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=head;
  head=insertAtLast(head,20);
  node* ptr=head;
  do{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }while(ptr!=head);
  return 0;  
}
