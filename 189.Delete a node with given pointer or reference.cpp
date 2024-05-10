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
void DeleteNodeWithGivenPtr(node* &second){
    if(second==NULL || second->next==NULL){
        return;
    }
    second->data=second->next->data;
    node* temp=second->next;
    second->next=second->next->next;
    delete temp;
}
int main(){
  node* head=new node(10);  
  node* first=new node(20);  
  node* second=new node(30);  
  node* third=new node(45);  
  node* fourth=new node(15);
  head->next=first;
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=NULL;
  node* ptr=head;
  cout<<"Before deletion: ";
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<"\nAfter Deletion: ";
  DeleteNodeWithGivenPtr(second);
  ptr=head;
  while (ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  } 
  return 0;  
}
