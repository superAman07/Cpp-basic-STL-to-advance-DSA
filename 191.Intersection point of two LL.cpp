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
int IntersectionPointOfTwoLL(node* &head1,node* &head2){
    int c1=0,c2=0;
    node* count1=head1;
    while(count1!=NULL){
        c1++;
        count1=count1->next;
    }
    node* count2=head2;
    while(count2!=NULL){
        c2++;
        count2=count2->next;
    }
    int d=abs(c1-c2);
    count1=head1;
    count2=head2;
    if(c1>c2){
        while(d--){
            count1=count1->next;
        }
    }
    else{
        while(d--){
            count2=count2->next;
        }
    }
    while(count1!=NULL && count2!=NULL){
        if(count1->data==count2->data){
            return count1->data;
        }
        count1=count1->next;
    }
    return -1;
}
int main(){
    node* head1=new node(5);
    node* second1=new node(8);
    node* third1=new node(7);
    node* fourth1=new node(10);
    node* fifth1=new node(12);
    node* sixth1=new node(15);
    head1->next=second1;
    second1->next=third1;
    third1->next=fourth1;
    fourth1->next=fifth1;
    fifth1->next=sixth1; 
    node* head2=new node(9);
    node* second2=new node(10);
    node* third2=new node(12);
    node* fourth2=new node(15);
    head2->next=second2;
    second2->next=third2;
    third2->next=fourth2;
    cout<<IntersectionPointOfTwoLL(head1,head2);
    return 0;
}
