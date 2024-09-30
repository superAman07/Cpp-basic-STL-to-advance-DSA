               // 1.  Syntax error

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x,y;
//    x=10;
//    y=27;
//    z=x+y;
//    cout<<z;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//    int x,y,z;
//    x=10;
//    y=17;
//    z=x+y
//    cout<<z;
//    return 0;
//}

          // 2.  Semantic error
        
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x=10,y=17,z=30;
//    x+y=z;
//    return 0;
//}


         // 3.    linker error

//#include<bits/stdc++.h>
//using namespace std;
//void fun();
//int main(){
//    fun();
//    return 0;
//}

          // 4. runtime error

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int x=1,y=0;
//    int z=x/y;
//    cout<<z;
//    return 0;
//}  
      // this is how we can fix the above problem

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    int x=17,y=10;
//    int z;
//    if(y==0){
//        cout<<"y should be non zero\n";
//        exit(0);
//    }   
//    z=x/y;
//    cout<<z;
//    return 0;
//}


     // 5. logical error
    
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10,y=20;
    if(x=y){            // if (x=y) y assign to x and not zero values inside the if condition always gives the true value
        cout<<"Same\n";
    }
    else
    cout<<"not same\n";
    cout<<x<<"\n";
    return 0;
}

         