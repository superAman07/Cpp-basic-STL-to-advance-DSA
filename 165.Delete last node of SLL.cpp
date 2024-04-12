#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node* deleteLastEle(node* &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL;
    }else{
        node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=NULL;//delete temp->next;
        return head;
    }
}
int main(){
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    deleteLastEle(head);
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
