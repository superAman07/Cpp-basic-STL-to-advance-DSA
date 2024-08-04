#include<iostream>
using namespace std;
struct deque{
    int *arr,front,cap,size;
    deque(int c){
        arr = new int[c];
        cap=c;front=0;size=0;
    }
    bool isFull(){
        return cap==size;
    }
    bool isEmpty(){
        return size==0;
    }
    void insertFront(int x){
        if(isFull())return;
        front = (front +cap -1)%cap;
        arr[front]=x;
        size++;
    }
    void deleteFront(){
        if(isEmpty())return;
        front = (front+1)%cap;
        size--;
    }
    void insertRear(int x){
        if(isFull())return;
        int new_rear = (front+size)%cap;
        arr[new_rear]=x;
        size++;
    }
    void deleteRear(){
        if(isEmpty())return;
        size--;
    }
    int getFront(){
        if(isEmpty())return -1;
        else return front;
    }
    int getRear(){
        if(isEmpty())return -1;
        else return (front+size-1)%cap;
    }
};
int main(){
    deque d(5);
    d.insertFront(1);
    d.insertFront(2);
    d.insertRear(3);
    d.insertRear(4);
    cout<<d.getFront()<<endl;
    cout<<d.getRear()<<endl;
    d.deleteFront();
    d.deleteRear();
    cout<<d.getFront()<<endl;
    return 0;
}
