// #include<bits/stdc++.h>
// using namespace std;
// bool check_for_anagram(string &s1,string &s2){
//     int m=s1.length();
//     int n=s2.length();
//     if(m!=n){
//         return false;
//     }
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     for(int i=0;i<n;i++){
//         if(s1[i]!=s2[i]){
//             return false;
//         }
//     }
//     return true;
//     // vector<char>ch1;
//     // vector<char>ch2;
//     // for(int i=0;i<m;i++){
//     //     ch1.push_back(s1[i]);
//     // }
//     // for(int i=0;i<n;i++){
//     //     ch2.push_back(s2[i]);
//     // }
//     // for(auto i:ch1){
//     //     cout<<i<<" ";
//     // }
//     // for(auto i:ch2){
//     //     cout<<i<<" ";
//     // }
     
// }
// int main(){
//     string s1="listen";
//     string s2="silent";
//     cout<<boolalpha<<check_for_anagram(s1,s2);
//     return 0;
// }


// another method

#include<bits/stdc++.h>
using namespace std;
bool check_for_anagram(string &s1, string &s2){
    int m=s1.length();
    int n=s2.length();
    if(m!=n){
        return false;
    }
    int count[256]={0};
    for(int i=0;i<m;i++){
        count[s1[i]]++;
    }
    for(int i=0;i<n;i++){
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1="listen";
    string s2="silent";
    cout<<boolalpha<<check_for_anagram(s1,s2)<<"\n";
    return 0;
}