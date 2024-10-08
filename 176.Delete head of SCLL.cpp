#include<iostream>
using namespace std;
struct node{
    int data;
    node* next=NULL;
    node(int x){
        data=x;
        next=NULL;
    }
};
// Naive function
// node* deleteHead(node* head){
//    if(head==NULL){
//     return NULL;
//    }
// if(head->next==head){
//     delete head;
//     return NULL;
//    } 
//    node* ptr=head->next;
//    while(ptr->next!=head){
//     ptr=ptr->next;
//    }
//    ptr->next=head->next;
//    delete head;
//    head=ptr->next;
//    return head;
// }
// efficient solution
node* deleteHead(node* head){
   if(head==NULL){
    return NULL;
   } 
   if(head->next==head){
    delete head;
    return NULL;
   }  
   head->data=head->next->data;
   node* ptr=head->next;
   head->next=head->next->next;
   delete ptr;
   return head;
}
int main(){
    node* head=new node(10);
    node* second=new node(30);
    node* third = new node(50);
    node* fourth=new node(53);
    node* fifth=new node(58);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=head;
    head=deleteHead(head);
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
