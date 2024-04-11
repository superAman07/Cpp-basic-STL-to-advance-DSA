#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next=nullptr;
    }
};
node* deleteAtFirst(node*&head){
    if(head==nullptr){
        return nullptr;
    }else{
        head=head->next;
        return head;
        // node*temp=head->next;
        // delete(head);
        // return temp;
    }
}
int main(){
    node* head=new node(50);
    head->next=new node(105);
    head->next->next=new node(20);
    head->next->next->next=new node(30);
    head->next->next->next->next=new node(80);
    head->next->next->next->next->next=new node(1000);
    deleteAtFirst(head);
    if(head==nullptr){
        cout<<"List is empty"<<endl;
    }
    node*ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return  0;
}
