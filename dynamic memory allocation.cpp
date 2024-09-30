//#include<bits/stdc++.h>
//using namespace std;
//int *fun(){
//    int x=27;
//    int *ptr=&x;
//    return ptr;
//}
//int main(){
//    int x,y;
//    cout<<*fun()<<"\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int *fun(){
//    int *ptr=new int;
//    *ptr=28;
//    return ptr;
//}
//int main(){
//    int x,y;
//    cout<<*fun()<<"\n";
//    int *ptr=fun();
//    delete ptr;
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int *createconn(){
    int *ptr=new int;
    return ptr;
}
void deleteConn(int *ptr){delete ptr;}
int main(){
    while (1)
    {
        int *ptr=createconn();
        /* do  some work */
        deleteConn(ptr);
    }
    return 0;
}