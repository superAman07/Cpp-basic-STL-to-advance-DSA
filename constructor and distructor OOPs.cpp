// #include<bits/stdc++.h>
// using namespace std;
// class Point{
//    private:
//    int x,y;
//    public:
//    Point(){
//        x=0;y=0;
//    }
//    Point(int x1,int y1){
//        x=x1;
//        y=y1;
//    }
//    void print(){
//        cout<<x<<" "<<y<<"\n";
//    }
// };
// int main(){
//    Point p1,p2(20,27);
//    p1.print();
//    p2.print();
//    Point *ptr=new Point(27,28);
//    ptr->print();
//    return 0;
// }

      //Initialiser list

// #include<bits/stdc++.h>
// using namespace std;
// class point{
//    private:
//    int x,y;
//    public:
//    point():x(0),y(0){   // it is the recommended way to use initialiser list wherever possible
//    };
//    point(int x1,int y1):x(x1),y(y1){   // it is the recommended way to use initialiser list wherever possible

//    };
//    void print(){
//        cout<<x<<" "<<y<<"\n";
//    }
// };
// int main(){
//    point p1,p2(27,28);
//    p1.print();
//    p2.print();
//    point *ptr=new point(20,7);
//    ptr->print();
//    return 0;
// }

       //sin initialiser list

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    public:
//    test(){
//        cout<<"Default\n";
//    }
//    test(int x){
//        cout<<"Parameterised\n";
//    }
//};
//class Main{
//    public:
//    test t;
//    public:
//    Main() {
//        t=test(7);
//    }
//};
//int main(){
//    Main m;
//    return 0;
//}
//

         // above program with initialiser list

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    public:
//    test(){
//        cout<<"Default\n";
//    }
//    test(int x){
//        cout<<"Parameterised\n";
//    }
//};
//class Main{
//    public:
//    test t;
//    public:
//    Main():t(10){
//    }
//};
//int main(){
//    Main m;
//    return 0;
//}


    // Copy constructor

//#include<bits/stdc++.h>
//using namespace std;
//class Test{
//    int *ptr;
//    public:
//    Test(int x){
//        ptr=new int(x);
//    }
//    void set(int x){
//        *ptr=x;
//    }
//    void print(){
//        cout<<*ptr<<" ";
//    }
//};
//int main(){
//    Test t1(10);
//    Test t2(t1);  //copy constructor it means Test t2=t1; not Test t2; t2=t1;
//    t2.set(20);
//    t1.print();
//    t2.print();         // output will be same , have a look on below program
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class test{
//    int *ptr;
//    public:
//    test(int x){
//        ptr=new int(x);
//    }
//    void set(int x){
//        *ptr=x;
//    }
//    test (const test &t){
//        int val=*(t.ptr);
//        ptr=new int(val);
//    }
//    void print(){
//        cout<<*ptr<<" ";
//    }
//};
//int main(){
//    test t1(10);
//    test t2(t1);
//    t2.set(20);
//    t1.print();
//    t2.print();
//    return 0;
//}

   //Distructor list

// #include<bits/stdc++.h>
// using namespace std;
// class test{
//     public:
//     test(){
//         cout<<"Constructor called\n";
//     }
//     ~test(){
//         cout<<"Distructor called\n";
//     }
// };
// int main(){
//     {
//         test t1;
//     }
//     test t2;
//     return 0;
// }