#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
//Naive solution function TC=>O(n) and AS=>O(n)
// node* reverseLL(node* head){
//     vector<int>v;
//     for(node* curr=head;curr!=NULL;curr=curr->next){
//         v.push_back(curr->data);
//     } 
//     for(node* curr=head;curr!=NULL;curr=curr->next){
//         curr->data=v.back(); 
//         v.pop_back();
//     }
//     return head;
// }

// Efficient solution (By changing links) TC=> O(n) and AS=>O(1)
node* reverseLL(node* head){
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=NULL;
    node* ptr=head;
    cout<<"Before reverse: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    head=reverseLL(head);
    ptr=head;
    cout<<"\nAfter reverse: ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
