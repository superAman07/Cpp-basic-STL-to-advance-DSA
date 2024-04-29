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
void findNthFromLast(node* head,int n){
    node* ptr=head;
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    node* curr=head;
    int i=0;
    while(i<count-n){
        curr=curr->next;
        i++;
    }
    cout<<curr->data;
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
    findNthFromLast(head,3);
    return 0;
}
