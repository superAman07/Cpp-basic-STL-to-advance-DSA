// friend fx
#include<bits/stdc++.h>
using namespace std;
class employee;
class printer{
   public:
   void printEmp(const employee &e);
};
class employee{
   private:
   int id;
   string name;
   public:
   friend void printer::printEmp(const employee &e);
   employee(int i, string n):id(i),name(n){};
};
void printer::printEmp(const employee &e){
   cout<<e.id<<" "<<e.name<<"\n";
}
int main(){
   printer p;
   employee e(101,"Vegeta");
   p.printEmp(e);
   return 0;
}

  // Friend class

// #include<bits/stdc++.h>
// using namespace std;
// class employee;
// class printer{
//     public:
//     void printemp(const employee &e);
// };
// class employee{
//     private:
//     int id;
//     string name;
//     public:
//     friend class printer;
//     employee(int i,string n):id(i),name(n){};
// };
// void printer::printemp(const employee &e){
//     cout<<e.id<<" "<<e.name<<"\n";
// }
// int main(){
//     printer p;
//     employee e(100,"Prince Vegeta");
//     p.printemp(e);
//     return 0;
// }