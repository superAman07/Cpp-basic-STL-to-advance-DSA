//#include<bits/stdc++.h>
//using namespace std;
//class player{
//    public:
//    static int count;
//    player(){          // constructed
//        count++;
//    }
//    ~player(){        //distructed
//        count--;
//    }
//};
//int player::count=0;
//int main(){
//    player p1;
//    cout<<player::count<<"\n";           // p1.count;
//    player p2;
//    cout<<player::count<<"\n";
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class player{
//    public:
//    static int count;
//    player(){
//        count++;
//    }
//    ~player(){
//        count--;
//    }
//};
//int player::count=0;
//int main(){
//    player p1;
//    cout<<player::count<<"\n";    //1
//    {
//        player p2;
//        cout<<player::count<<"\n";                      // here p2 ll distroyed   2
//    }
//    cout<<player::count<<"\n";   // again 1
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//class player{
//    private:
//    static int count;
//    public:
//    player(){
//        count++;
//    }
//    ~player(){
//        count--;
//    }
//    static int getCount(){
//        return count;
//    }
//};
//int player::count=0;
//int main(){
//    player p1,p2,p3,p6;
//    cout<<player::getCount()<<"\n";
//    return 0;
//}



 // ------->Static Members Function<----------------//

 #include<bits/stdc++.h>
 using namespace std;
 class player{
    private:
    static int count;
    public:
    player (){
        count++;
    }
    ~player(){
        count--;
    }
    static int getcount(){
        return count;
    };
 };
 int player::count=0;
 int main(){
    player p1,p2,p3;
    cout<<player::getcount()<<" ";
    return 0;
 }