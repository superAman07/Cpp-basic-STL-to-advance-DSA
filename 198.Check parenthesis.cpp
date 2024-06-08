#include<iostream>
#include<stack>
using namespace std;
bool matching(char a,char b){
    return ((a=='(' && b==')')||(a=='[' && b==']')||(a=='{'&&b=='}'));
}
bool CheckParenthesis(string &s){
    stack<int>st;
    for(int i=0;i<s.length();++i){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }else{
            if(s.empty()==true)return false;
            else if(matching(st.top(),s[i])==false)return false;
            else st.pop();
        }
    }
    return st.empty()==true;
}
int main(){
    string s="{[()]}";
    cout<<boolalpha<<CheckParenthesis(s);
    return 0;
}
