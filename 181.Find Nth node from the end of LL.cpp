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
// Using length of LL
// void findNthFromLast(node* head,int n){
//     node* ptr=head;
//     int count=0;
//     while(ptr!=NULL){
//         count++;
//         ptr=ptr->next;
//     }
//     if(count<n)return;
//     node* curr=head;
//     int i=0;
//     while(i<count-n){
//         curr=curr->next;
//         i++;
//     }
//     cout<<curr->data;
// }
// using two pointer/Reference
void findNthFromLast(node* head,int n){
    if(head==NULL)return;
    node* first=head;
    for(int i=0;i<n;i++){
        if(!first)return ;
        first=first->next;
    }
    node* second=head;
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    cout<<second->data;
}
int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=NULL;
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    findNthFromLast(head,2);
    return 0;
}
