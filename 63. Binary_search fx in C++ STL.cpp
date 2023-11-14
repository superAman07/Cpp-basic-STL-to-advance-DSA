    // vector

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v{1,25,31,39,45,82,97};
//     if(binary_search(v.begin(),v.end(),45)==true){
//         cout<<"Found\n";
//     }
//     else{
//         cout<<"Not Found\n";
//     }
//     return 0;
// }

   // array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]{1,25,31,39,45,82,97};
//     if(binary_search(arr,arr+7,19)==true){
//         cout<<"Found\n";
//     }
//     else
//     cout<<"Not found\n";
//     return 0;
// }

     // exceptional case 
// exceptional case for a reason that the binary search fx depends on coustom fx 
// i.e., myCmp fx therefore it returns the value when we are using point acc. to 
// x value of point the y point is completely ignored here...

#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
    point(int i,int j){
        this->x=i;
        this->y=j;
    } 
};
bool myCmp(point p1,point p2){
    return p1.x<p2.x;
}
int main(){
    vector<point>v{{10,23},{9,67},{3,20},{5,100}};
    sort(v.begin(),v.end(),myCmp);
    point p={9,20};
    if(binary_search(v.begin(),v.end(),p,myCmp)){
        cout<<"Found\n";
    }
    else{
        cout<<"Not found\n";
    }
    return 0;
}