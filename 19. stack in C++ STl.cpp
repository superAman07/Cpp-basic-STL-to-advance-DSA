#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(17);
    s.push(27);
    s.push(28);
    cout<<s.size()<<" "<<s.top();
    cout<<"\n";
    s.pop();
    cout<<s.size()<<" "<<s.top();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int>s;
//     s.push(7);
//     s.push(10);
//     s.push(13);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<char>s;
//     s.push('a');
//     s.push('b');
//     s.push('c');
//     s.push('e');
//     s.push('d');
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }