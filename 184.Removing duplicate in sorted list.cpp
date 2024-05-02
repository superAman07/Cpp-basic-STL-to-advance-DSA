#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

node* removeDuplicate(node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* current=head;
    while(current->next!=NULL){
        if(current->data==current->next->data){
            node* temp=current->next;
            current->next=temp->next;
            delete temp;
        }else{
            current=current->next;
        }
    }
    return head;
}

void printList(node* head){
    node* ptr=head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main() {
    node* head = new node(10);
    head->next = new node(10);
    head->next->next = new node(30);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(40);
    cout<<"Original List:";
    printList(head);
    head=removeDuplicate(head);
    cout<<"\nList after removing duplicates:";
    printList(head);
    return 0;
}
