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
 bool isLoop(node* head){ 
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
 }
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head->next;
    cout<<isLoop(head);
    return 0;
}
