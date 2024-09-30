//#include<bits/stdc++.h>
//using namespace std;
//class base{
//    protected:
//    int x;
//    public:
//    base(int a):x(a){
//        cout<<"Base\n";
//    }
//};
//class derived:public base{
//    private:
//    int y;
//    public:                                 
//    derived(int b):y(b){                 // it gives compiler error bqz compiler doesn't create default constructor in the base class...
//        cout<<"Derived\n";                 
//    }
//    void print(){
//        cout<<x<<" "<<y<<"\n";
//    }
//};
//int main(){
//    derived d(27);
//    d.print();
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int x;
    public:
    base(int a):x(a){
        cout<<"Base\n";
    }
};
class derived:public base{
    private:
    int y;
    public:
    derived(int a,int b):base(a),y(b){
        cout<<"Derived\n";
    }
    void print(){
        cout<<x<<" "<<y<<'\n';
    }
};
int main(){
    derived d(27,28);
    d.print();
    return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//class base{
//    protected:                      //private(compiler error)
//    int x;
//    public:
//    base(int a):x(a){
//        cout<<"Base\n";
//    }
//};
//class derived:public base{        // class derived:private or protected base{       (compiler error)
//    private:
//    int y;
//    derived(int a,int b):base(a),y(b){
//        cout<<"Derived\n";
//    }
//    void  print(){
//        cout<<x<<" "<<y<<"\n";
//    }
//};
//int main(){
//    derived d(27,28);
//    d.print();
//    return 0;
//}