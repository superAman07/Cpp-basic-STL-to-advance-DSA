// Naive solution
// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// // node* insertAtBeg(node* &head,int x){
// //     node* ptr=new node(x);
// //     node* temp=head;
// //     if(head==NULL){
// //         return ptr;
// //     }
// //     ptr->next=head;
// //     while(temp->next!=head){
// //         temp=temp->next;
// //     }
// //     temp->next=ptr; 
// //     head=ptr;
// //     return head;
// // }
// node* insertAtBeg(node* & head,int x){
//     node* temp=new node(x);
//     if(head==NULL){
//         temp->next=temp;
//     }else{
//         node* curr=head;
//         while(curr->next!=head){
//             curr=curr->next;
//         }
//         curr->next=temp;
//         temp->next=head;
//     }
//     return temp;
// }
// int main(){
//     node* head= new node(10);
//     node* second= new node(20);
//     node* third= new node(30);
//     node* fourth= new node(40);
//     node* fifth= new node(50);
//     head->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=head;
//     head=insertAtBeg(head,5);
//     node* ptr=head;
//     do{
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }while(ptr!=head);
//     return 0;
// }

// Efficient solution
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
node* insertAtBeg(node* & head,int x){
    node* ptr=new node(x);
    if(head==NULL){
        ptr->next=ptr;
        return ptr;
    }else{
        ptr->next=head->next;
        head->next=ptr;
        int z=head->data;
        head->data=ptr->data;
        ptr->data=z;
        return head;
    }
}
int main(){
    node* head= new node(10);
    node* second= new node(20);
    node* third= new node(30);
    node* fourth= new node(40);
    node* fifth= new node(50);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=head;
    head=insertAtBeg(head,75);
    node* ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
