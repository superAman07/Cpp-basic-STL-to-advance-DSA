#include<iostream>
using namespace std;
struct Min_Heap{
    int *arr;
    int size;
    int capacity;
    Min_Heap(int x){
        capacity=x;
        arr=new int[capacity];
        size=0;
    }
    int left(int i){return ((2*i)+1);}
    int right(int i){return ((2*i)+2);}
    int parent(int i){return ((i-1)/2);}

    void insert(int x){
        if(size==capacity)return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0&& arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]); 
            i=parent(i);
        }
        cout<<"\n";
    }
    void display(){
        for(int i=0;i< size;i++){
            cout<<arr[i]<<' ';
        }
    }
};
int main(){
    Min_Heap h(10);
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(40);
    h.insert(50);
    h.insert(100);
    h.insert(25);
    h.insert(45);
    h.display();  //10 20 15 40 50 100 25 45 
    h.insert(12);
    h.display();  //10 20 15 12 50 100 25 45 40 
    return 0;
}
