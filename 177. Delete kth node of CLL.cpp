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
node* deleteKthNode(node* head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        node* temp=head;
        while(temp->next!=head){
            temp =temp->next;
        }
        temp->next=head->next;
        delete head;
        return temp->next;
    }
    node* temp=head;
    while(k>2){
        temp=temp->next;
        k--;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
    return head;
}

int main(){
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=head;
    head=deleteKthNode(head,3);
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
