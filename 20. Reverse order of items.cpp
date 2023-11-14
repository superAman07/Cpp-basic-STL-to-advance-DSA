// #include<bits/stdc++.h>
// #include<iostream>
// #include<stack>
// using namespace std;
// void reverse(string &str){
//     stack<char>s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }
//     for(int i=0;i<str.length();i++){
//         str[i]=s.top();
//         s.pop();
//     }
// }
// int main(){
//     string str{"abced"};
//     reverse(str);
//     cout<<str<<"\n";
//     return 0;
// }

//  REVERSE A LIST(singly LL) using stack

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l{7,20,3,25,30};
//     stack<int>s;
//     for(int i=0;i<5;i++){
//         s.push(l[i]);
//     }
// }


#include<bits/stdc++.h>
using namespace std;
string reversed(const string &str){
    string str1=str;
    reverse(str1.begin(),str1.end());
    if(str==str1){
        return "yes";
    }
    return "no";
}
int main(){
    string str;
    cin>>str;
    cout<<reversed(str);
    return 0;
}
