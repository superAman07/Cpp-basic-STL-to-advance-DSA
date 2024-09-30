#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> > vect(n,vector<int>(n,0));
    vector<vector<int> > ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            vect[i][j]=t;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n"<<"Transpose"<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]= vect[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}