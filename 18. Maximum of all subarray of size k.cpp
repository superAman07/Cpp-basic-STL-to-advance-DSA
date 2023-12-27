#include<bits/stdc++.h>
using namespace std;
void maximum_of_subarray(vector<int>&v,int &k){
    for(int i=0;i<(k)&&(k<=7);i++,k++){
        cout<<max(max(v[i],v[i+1]),v[i+2])<<" ";
    }
}
int main(){
    int k=3,x,n;
    cout<<"#---->program for maximum of all subarray of size k=3<----#\n";
    cout<<"Enter the  total no. of elements\n";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    maximum_of_subarray(v,k);
    return 0;
}

      // with the help of Dequeue

#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[],int n,int k){
    deque<int>dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back();
    }
    for(int i=0;i<n;i++){
        cout<<arr[dq.front()];
        while(!dq.empty() && dq.front()<=n-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back();
    }
    cout<<arr[dq.front()]<<" ";
}
int main(){
    int n=7;
    int arr[]{10,8,5,12,15,7,6};
    int k=3;
    printMax(arr,n,k);
    return 0;
}
