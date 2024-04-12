#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data =x;
        next=NULL;
    }
};
//Iterative Solution
// int SearchIterative(node*head,int n){
//     int count=1;
//     while(head!=NULL){
//         if(head->data==n){
//             return count;
//         }
//         count++;
//         head=head->next;
//     }
//     return -1;
// }
//Recursive solution
int SearchRecursive(node*head,int n){
    if(head==NULL){
        return -1;
    } 
    return (head->data==n)?1:SearchRecursive(head->next,n)+1;
}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    // cout<<"Desired element is present at: "<<SearchIterative(head,30);
    cout<<"Desired element by recursive is still present at: "<<SearchRecursive(head,30);
    return 0;
}
