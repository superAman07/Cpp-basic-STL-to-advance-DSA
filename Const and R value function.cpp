//#include<bits/stdc++.h>
//using namespace std;
//void fun(string &s){
//    cout<<s<<"\n";
//}                                                                               //output of the program is Compiler error 
//int main(){
//    fun("user");
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//void fun(const string &s){
//    cout<<s<<"\n";
//}                                                                                // Now it'll compile fine
//int main(){
//    fun("User");
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//void fun(const string &s){
//    s="USER"+s;                                                                   // again compiler error
//    cout<<s<<"\n";
//}
//int main(){
//    fun("userr");
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
void fun(string &&s){                                                            // using R value(&&)
    s="Hi "+s;                 
    cout<<s;
}
int main(){
    fun("user");
    return 0;
}