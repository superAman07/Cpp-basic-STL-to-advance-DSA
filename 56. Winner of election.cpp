  // more efficient O(n*int_max)

#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
string winner_of_election(vector<string>&arr){
    unordered_map<string,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    int max_count=0;
    string winner;
    for(auto x:m){
        if(x.second>max_count){
            max_count=x.second;
            winner=x.first;
        }
    }
    return winner;
}
int main(){
    // vector<string>arr{"abc","pqr","abc","xyz"};
    vector<string>arr{"abc","pqr","pqr","xyz"};
    // vector<string>arr{"abc","pqr","xyz","xyz"};
    cout<<winner_of_election(arr);
    return 0;
}

  // naive solution O(n^2 *int_max)

// #include<bits/stdc++.h>
// using namespace std;
// void winner(vector<string>&s){
//     for(int i=0;i<s.size();i++){
//         int count=1;
//         for(int j=i+1;j<s.size();j++){
//             if(s[i]==s[j]){          
//                 count+=1;        
//                 cout<<s[i];
//             }
//             else{
//                 count=1;
//             }
//         }
//     }
// }
// int main(){
//     vector<string>s{"abc","pqr","abc","xyz"};
//     // vector<string>s{"abc","pqr","pqr","xyz"};
//     // vector<string>s{"abc","pqr","xyz","xyz"};
//     winner(s);
//     return 0;
// }