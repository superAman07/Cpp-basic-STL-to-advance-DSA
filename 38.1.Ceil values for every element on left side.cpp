//in O(nlog n) using Self balancing BST (set)
#include<iostream>
#include<set>
#include<vector>
using namespace std;
void printCeil(vector<int>& arr){
    int n =arr.size();
    set<int>s;
    cout<<"-1"<<" ";
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it!=s.end()){
            cout<<(*it)<<" ";
        }else {
            cout<<"-1 ";
        }
        s.insert(arr[i]);
    }
}
int main(){
    vector<int> arr{2,8,30,15,25,12};
    printCeil(arr);
    return 0;
}
