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
node *segregateEvenOdd(node *head){
    node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
    for(node* curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }else{
                eE->next=curr;
                eE=eE->next;
            }
        }else{
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if(eS==NULL || oS==NULL){
        return head;
    }else{
        eE->next=oS;
        oE->next=NULL;
        return eS;
    }
}
int main(){
    node* head=new node(10);
    head->next=new node(13);
    head->next->next=new node(16);
    head->next->next->next=new node(19);
    head->next->next->next->next=new node(23);
    head->next->next->next->next->next=new node(28);
    cout<<"Before Segregate: ";
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    head=segregateEvenOdd(head);
    cout<<"After Segregate: ";
    curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    return 0;
}
