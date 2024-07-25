#include <bits/stdc++.h>
using namespace std;
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L';
}
 
void infixToPrefix(string s) {
    stack<char> st;
    string result;
    reverse(s.begin(),s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            s[i] = ')';
        } else if (s[i] == ')') {
            s[i] = '(';
        }
    }
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if((c>='a'&&c<='z')|| (c>='A' && c<='Z') || c>='0' && c<='9'){
            result+=c;
        }else if(c=='('){
            st.push(c);
        }else if(c==')'){
            while(!st.empty() && st.top()!='('){
                result+=st.top();
                st.pop();
            }
            if(!st.empty())st.pop();
        }else{
            while(!st.empty() && prec(c) < prec(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    cout << result << endl;
}
int main() {
    // string exp = "a+b*(c^d-e)^(f+g*h)-i";
    // string exp = "(x+y)*z";
    string exp = "x+y/z-w*u";
    infixToPrefix(exp);
    return 0;
}
