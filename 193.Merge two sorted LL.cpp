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
node *MergeTwoSortedArray(node* &a,node* &b){
    if(a==NULL){
        return b;
    }  
    if(b==NULL){
        return a;
    }
    node *head=NULL,*tail=NULL;
    if(a->data<=b->data){
        head=tail=a;
        a=a->next;
    }else{
        head=tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data>b->data){
            tail->next=b;
            tail=b;
            b=b->next;
        }else{
            tail->next=a;
            tail=a;
            a=a->next;
        }
    }
    if(a==NULL){
        tail->next=b;
    }else{
        tail->next=a;
    }
    return head;
}
int main(){
    node* a=new node(10);
    a->next=new node(20);
    a->next->next=new node(30);
    node* b=new node(5);
    b->next=new node(25);
    a=MergeTwoSortedArray(a,b);
    node* ptr=a;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
