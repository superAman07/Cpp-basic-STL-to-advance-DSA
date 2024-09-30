//#include<bits/stdc++.h>
//using namespace std;
//class point{
//    private:
//    int x;
//    int y;
//    public:
//    point(int x,int y){
//        this->x=x;       // x=x1;   y=y1;
//        this->y=y;
//        cout<<x<<" "<<y<<"\n";
//    }
//};
//int main(){
//    point p1(2,7),p2(27,28);
//    return 0;
//}

   // chaining of function

#include<bits/stdc++.h>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(int x, int y){
        this->x=x;
        this->y=y;
    }
    point &setX(int x){
        this->x=x;
        return *this;
    }
    point &setY(int y){
        this->y=y;
        return *this;
    }
};
int main(){
    point p1(10,10);
    p1.setX(5).setY(7);
    return 0;
}