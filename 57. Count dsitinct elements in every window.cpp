  // naive solution   O((n-k)*k*k)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count_distinct_int_every_window(vector<int>&v,int k){
    int n=v.size();
    for(int i=0;i<n-k+1;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag=false;
            for(int p=0;p<j;p++){
                if(v[i+j]==v[p+i]){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                count++;
            }
        }
        cout<<count<<" ";
    }
}
int main(){
    vector<int>v{10,20,20,10,30,40,10};
    int k=4;
    count_distinct_int_every_window(v,k);
    return 0;
}


    // O(n)

#include<bits/stdc++.h>
using namespace std;
void count_distinct_int_every_window(vector<int>&v,int k){
    int n=v.size();
    unordered_map<int,int>m;
    for(int i=0;i<k;i++){
        m[v[i]]++;
    }
    for(int i=k;i<n;i++){
        m[v[i-k]]--;
        if(m[v[i-k]]==0){
            m.erase(v[i-k]);
        }
        m[v[i]]++;
        cout<<m.size()<<" ";
    }
}
int main(){
    vector<int>v{10,20,20,10,30,40,10};
    int k=4;
    count_distinct_int_every_window(v,k);
    return 0;
}
