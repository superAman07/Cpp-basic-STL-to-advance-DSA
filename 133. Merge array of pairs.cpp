#include<iostream>
#include<algorithm>
using namespace std;

struct Interval{
    int start;
    int end;
};
bool myCmp(Interval p1,Interval p2){
    return p1.start<p2.start;
}
int main(){
    // Interval arr[]={{1,3},{2,4},{5,7},{6,8}};
    Interval arr[]={{7,9},{6,10},{4,5},{1,3},{2,4}};
    int n=sizeof(arr)/sizeof(arr[0]);
    Interval temp[n];
    int j=0; 
    sort(arr,arr+n,myCmp);
    for(int i=1;i<n;i++){
        if(arr[j].end>=arr[i].start){
            arr[j].end=max(arr[j].end,arr[i].end);
            arr[j].start=min(arr[j].start,arr[i].start);
        }
        else{
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
    return 0;
}
