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
// Method 1st simply by swapping... It might be costly
// node* PairwiseSwap(node* &head){
//     node* ptr=head;
//     while(ptr!=NULL && ptr->next!=NULL){
//         // int temp=0;
//         // temp=ptr->data;
//         // ptr->data=ptr->next->data;
//         // ptr->next->data=temp;
//         swap(ptr->data,ptr->next->data);
//         ptr=ptr->next->next;
//     }
//     return head;
// }

// Method 2:- Changing pointer and reference (Best solution)
node* PairwiseSwap(node* &head){
    if(head==NULL || head->next==NULL)return NULL;
    node* curr=head->next->next;
    node* prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        node* next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head->next->next->next->next->next=new node(60);
    node* ptr=head;
    cout<<"Before Swapping pairs: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    head=PairwiseSwap(head);
    ptr=head;
    cout<<"\nAfter Swapping pairs: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
