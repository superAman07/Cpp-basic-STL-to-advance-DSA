//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//    int arr[] {2,-8,3,-28,-27};
//    int b=271;
//    int n=sizeof(arr)/sizeof(arr[0]);
//    //sort(arr,arr+n,[](int x,int y){cout<<b<<"\n";return abs(x)<abs(y);});  //b can access by putting variable b in lambda fx or putting &b before []
//    //sort(arr,arr+n,[b](int x,int y){cout<<b<<"\n";return abs(x)<abs(y);});
//    sort(arr,arr+n,[&b](int x,int y){cout<<b<<"\n";return abs(x)<abs(y);});
//    for(auto x:arr){
//        cout<<x<<" ";
//    }
//    return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//    int arr[] {-27,3,2,1,-28};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    auto mycmp=[](int x,int y){return abs(x)<abs(y);};
//    sort(arr,arr+n,mycmp);
//    for(auto x:arr){
//        cout<<x<<" ";
//    }
//    return 0;
//}


   // for_each()

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v {10,17,27,28};
  //  reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),[](int &x){x=x*2;});           // here taking amphorsent for modifying variable....
    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});
    return 0;
}

  // count_if()

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//    vector<int>v {10,2,5,20,100};
//    int res=count_if(v.begin(),v.end(),[](int &x){return x>=10;});
//    cout<<res<<"\n";
//    return 0;
//}

  // find_if()

//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//    vector<int>v {10,23,7,37,27};
//    auto res=find_if(v.begin(),v.end(),[](int &x){return x<10;});
//    cout<<*res<<"\n";
//    return 0;
//}

  // accumulate()

//#include<bits/stdc++.h>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//  vector<int>v {10,20,3,9,1};
//  int res= accumulate(v.begin(),v.end(),0);
//  cout<<res<<"\n";
//  res=accumulate(v.begin(),v.end(),1,[](int x,int y){return x*y;});
//  cout<<res<<"\n";
//  return 0;
//}