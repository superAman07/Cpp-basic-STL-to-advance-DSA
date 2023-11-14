   // this is not a good program to use rand()
   // this will give same result on every run 

// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main(){
//     // for(int i=0;i<RAND_MAX;i++){  // rand_max is not less than 32767
//     for(int i=0;i<5;i++){   
//         cout<<rand()<<" ";
//     }
//     return 0;
// }

    // good way to use rand()

// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main(){
//     srand(time(NULL));    // through this line we'll get random no.'s on every run
//     for(int i=0;i<5;i++){
//         cout<<rand()<<" ";
//     }
//     return 0;
// }

    // another best way

// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;
// int main(){
//     srand(*time(NULL));
//     for(int i=0;i<5;i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// random no from range 0 to 99

// #include<iostream>
// #include<ctime>
// #include<cstdlib>
// using namespace std;
// int main(){
//     srand(time(NULL));
//     for(int i=0;i<5;i++){
//         cout<<rand()%100<<" ";
//     }
//     return 0;
// }

   // random no. range from low to high

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    int low=10,high=100;
    int range=high-low+1;
    for(int i=0;i<5;i++){
        cout<<(rand()%100)+low<<" ";
    }
    // cout<<rand()<<" ";
    return 0;
}