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
void traverse(node* head){
    if(head==NULL){
        return;
    }
    node*ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    // cout<<head->data<<" ";
    // for(node* ptr=head->next;ptr!=head;ptr=ptr->next){
    //     cout<<ptr->data<<" ";
    // }
}
int main(){
    node* head= new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    traverse(head);
    return 0;
}
