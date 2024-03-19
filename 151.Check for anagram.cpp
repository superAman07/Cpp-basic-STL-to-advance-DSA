// Naive solution

// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool checkAmagram(string &s1,string &s2){
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     return s1==s2;
// }
// int main(){
//     string s1="silent";
//     string s2="listen";
//     cout<<boolalpha<<checkAmagram(s1,s2)<<endl; 
//     return 0;
// }

// Efficient solution

#include<iostream>
using namespace std;
const int Char = 256;
bool CheckAnagram(string &s1,string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[Char]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<Char;i++){
        if(count[i]!=0)return false;
    }
    return true;
}
int main(){
    string s1="silent";
    string s2="listen";
    cout<<boolalpha<<CheckAnagram(s1,s2)<<endl;
    return 0;
}
