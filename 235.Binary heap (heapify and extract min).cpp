#include<iostream>
using namespace std;
struct min_heap{
    int *arr;
    int size;
    int capacity;
    min_heap(int c){
        capacity=c;
        arr=new int[c];
        size=0;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size==capacity)return;
        size++;arr[size-1]=x;
        for(int i=size-1;i!=0&& arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void minHeapify(int i){
        int lt=left(i),rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i])smallest=lt;
        if(rt<size && arr[rt]<arr[smallest])smallest=rt;
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minHeapify(smallest);
        }
    }
    void extractMin(){
        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    min_heap h(10);
    h.insert(20);
    h.insert(25);
    h.insert(30);
    h.insert(35);
    h.insert(40);
    h.insert(80);
    h.insert(32);
    h.insert(100);
    h.insert(70);
    h.insert(60);
    h.display();
    // h.minHeapify(0);
    h.extractMin();
    h.display();
    return 0;
}
