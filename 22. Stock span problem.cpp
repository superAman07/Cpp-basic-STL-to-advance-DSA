// #include<bits/stdc++.h>
// using namespace std;
// void Spanning(vector<int>&v){
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=i-1;j>=0;j--){                      // O(n^2)
//             if(v[j]<=v[i]){
//                 count++;
//             }
//             else{
//                 break;
//             }
//         }
//         cout<<count<<" ";
//     }
// }
// int main(){
//     vector<int>v{15,13,12,14,16,8,6,4,10,30};
//     Spanning(v);
//     return 0;
// }

     // Efficient solution
    
#include<bits/stdc++.h>
using namespace std;
void span_effeciently(vector<int>&v){
    stack<int>s;
    s.push(0);
    for(int i=0;i<v.size();i++){            // it looks like O(n^2) but it isn't
        while(!s.empty() && v[i]>=v[s.top()]){
            s.pop();
        }
    int span=(s.empty())?(i+1):(i-s.top());
    cout<<span<<" ";
    s.push(i);
    }
}
int main(){
    vector<int>v{15,13,12,14,16,8,6,4,10,30};
    span_effeciently(v);
    return 0;
}