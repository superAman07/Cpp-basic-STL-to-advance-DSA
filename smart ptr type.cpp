
                              // UNIQUE pointer

//#include<bits/stdc++.h>
//#include<memory>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){
//        x=a;
//        cout<<"Constructor\n";
//    }
//    ~test(){cout<<"Distructor\n";}
//    void fun(){cout<<x<<"\n";}
//};
//int main(){
//    cout<<"Main Begins\n";
//    {
//       // unique_ptr<test>ptr=make_unique<test>(27);                      // recommended 
//        unique_ptr<test>ptr(new test(28));           // since it is the smart pointer the allocated would be distroyed automatically 
//        ptr->fun();                           
//    }
//    cout<<"main end\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){x=a;
//    cout<<"Constructor\n";}
//    ~test(){
//        cout<<"Destructor\n";
//    }
//    void fun(){
//        cout<<x<<"\n";
//    }
//};
//int main(){
//    cout<<"main begins\n";
//    {
//        unique_ptr<test>ptr1=make_unique<test>(27);
//        unique_ptr<test>ptr2=ptr1;  // we cannot assign unique ptr to the other unique ptr;
//        
//    }
//     return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){
//        x=a;
//        cout<<"constructor\n";
//    }
//    ~test(){cout<<"destructor\n";}
//};
//int main(){
//    unique_ptr<test>ptr1=make_unique<test>(27);
//    unique_ptr<test>ptr2=move(ptr1);
//    return 0;
//}

           // Shared Pointer
    
//#include<iostream>
//#include<memory>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){x=a;cout<<"constructor\n";}
//    ~test(){cout<<"destructor\n";}
//    void fun(){
//        cout<<x<<"\n";
//    }
//};
//int main(){
//    shared_ptr<test>ptr1=make_shared<test>(27);         // recommended
//    //shared_ptr<test>ptr1(new test(28));
//    shared_ptr<test>ptr2=ptr1;
//    shared_ptr<test>ptr3=ptr2;
//    cout<<ptr1.use_count()<<"\n";
//    cout<<ptr2.use_count()<<"\n";
//    cout<<ptr3.use_count();
//    return 0;
//}

//#include<iostream>
//#include<memory>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){x=a;cout<<"constructor\n";}
//    ~test(){cout<<"Destructor\n";}
//    void fun(){cout<<x<<"\n";}
//};
//int main(){
//    shared_ptr<test>ptr1;
//    {
//        shared_ptr<test>ptr2=make_shared<test>(18);
//       // ptr1=ptr2;       // after doing this reference count is zero
//    }
//    cout<<"Main Ends\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    int x;
//    public: 
//    test(int a=0){x=a;cout<<"constructor called\n";}
//    ~test(){cout<<"destructor called\n";}
//};
//int main(){
//    shared_ptr<test>ptr1;
//    {
//        shared_ptr<test>ptr2=make_shared<test>(27);
//        ptr1=ptr2;
//    }
//    cout<<"Main ends\n";
//    return 0;
//}


            // Weak Pointer

//#include<iostream>
//#include<memory>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){x=a;cout<<"Constructor\n";}
//    ~test(){cout<<"Destructor\n";}
//};
//int main(){
//    weak_ptr<test>p1;
//    {
//        shared_ptr<test>p2=make_shared<test>(27);
//        p1=p2;
//    }
//    cout<<"Main ends\n";
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
class test{
    int x;
    public:
    test(int a=0){x=a;cout<<"constructor\n";}
    ~test(){cout<<"destructor\n";}
};
int main(){
    weak_ptr<test>p1;
    {
        shared_ptr<test>p2=make_shared<test>(7);
        p1=p2;
        cout<<p2.use_count()<<"\n";
    }
    cout<<p1.expired()<<"\n";  // if the obj is deallocated the expired fx returns true or false if otherwise
    cout<<"main ends\n";
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    int x;
//    public:
//    test(int a=0){x=a;cout<<"constructor\n";}
//    ~test(){cout<<"Destructor\n";}
//};
//int main(){
//    weak_ptr<test>p1;
//    {
//        shared_ptr<test>p2=make_shared<test>(7);
//        p1=p2;
//        shared_ptr<test>p3=lock(p1);//lock fx returns a shared ptr corresponding to the obj which has been pointed by weak pointer(p1)
//    }
//    return 0;
//}