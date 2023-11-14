   // In vector

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{2,13,52,1,600,8,9,20};
//     auto it=max_element(v.begin(),v.end());
//     cout<<"max element is:"<<*it<<"\n";
//     it=min_element(v.begin(),v.end());
//     cout<<"min element is:"<<*it<<"\n";
//     return 0;
// }

  // In array

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]{2,13,52,137,60,8,9,20};
//     auto it=max_element(arr,arr+8);
//     cout<<"Max Element is:"<<*it<<"\n";
//     it=min_element(arr,arr+8);
//     cout<<"Min Element is:"<<*it<<"\n";
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct point{
    int x,y;
    point(int i,int j){
        x=i;
        y=j;
    }
};
bool myComp(point p1, point p2){
    return p1.x < p2.x;
}
int main(){
    vector<point>v{{5,4},{2,380},{8,13},{90,1}};
    auto it=max_element(v.begin(),v.end(),myComp);
    cout<<it->x<<" "<<(*it).y<<"\n";
    it=min_element(v.begin(),v.end(),myComp);
    cout<<(*it).x<<" "<<it->y;
    return 0;
}