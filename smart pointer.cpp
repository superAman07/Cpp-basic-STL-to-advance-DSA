//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    public:
//    int x,y;
//    test(int a=0,int b=0){
//        x=a;
//        y=b;
//        cout<<"Constructor called\n";
//    }
//    ~test(){
//        cout<<"Desturctor Called\n";
//    }
//};
//int main(){
//    cout<<"Main Begin\n";
//    {
//        test *p=new test(17,10);
//    }
//    cout<<"Main end\n";
//    return 0;
//}

    // SMART POINTER 

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    public:
//    int x,y;
//    test(int a=0,int b=0){
//        cout<<"Constructor Called\n";
//    }
//    ~test(){
//        cout<<"Destructor Called\n";
//    }
//};
//class SP{
//    test *ptr;
//    public:
//    SP(test *p=NULL){ptr=p;}
//    ~SP(){delete ptr;}
//    test &operator*(){return *ptr;}
//    test *operator->(){return ptr;}
//};
//int main(){
//    cout<<"Main Begin\n";
//    {
//        SP sp(new test(10,17));
//    }
//    cout<<"Main Ends\n";
//    return 0;
//}

    // template smart pointer

//#include<bits/stdc++.h>
//template<class T>
//class SP{
//    T *ptr;
//    public:
//    SP (T*p=NULL){ptr=p;}
//    ~SP(){delete ptr;}
//    T &operator*(){return *ptr;}
//    T *operator->(){return ptr;}
//};
//int main(){
//    SP <int> sp(new int());
//    *sp=27;
//    cout<<*sp<<"\n";           <<---------->>
//    return 0;
//}//