#include<iostream>
#include<algorithm>
using namespace std;
// class Interval{
//     public:
//     int in;
//     int out;
// };
// bool myCmp(Interval i1,Interval i2){
//     return (i1.in)<(i2.in);
// }
int main(){
    int arr[]{900,940}; // 9:00 , 9:40
    int dept[]{1000,1030};// 10:00, 10:30   0<=arr[],dept[]<=2359 i.e., 23:59
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=1,j=0,res=1,curr=1;
    while(i<n&& j<n){
        if(arr[i]<=dept[j]){
            curr++;i++;
        }
        else{
            curr--;j++;
        }
        res = max(res,curr);
    }
    cout<<res<<"\n";
    return 0;
}
