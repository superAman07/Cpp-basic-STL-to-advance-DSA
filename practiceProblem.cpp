//Sorting of one array acc.. to other

// #include<bits/stdc++.h>
// using namespace std;
// void sort_arr_wrt_other(int a[],char b[],int n){
//     pair<int,char>pa[n];
//     for(int i=0;i<n;i++){
//         pa[i]={a[i],b[i]};
//     }
//     sort(pa,pa+n);
//     for(int i=0;i<n;i++){
//         cout<<pa[i].second<<" ";
//     }
// }
// int main(){
//     int n=3;
//     int a[]{10,15,5};
//     char b[]{'X','Y','Z'};
//     sort_arr_wrt_other(a,b,n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // stack<string>stack;
//     // stack.push("a");
//     // stack.push("b");
//     // stack.push("c");
//     // stack.push("e");
//     // stack.push("d");
// }
// int main() {
//     stack<string> stack;
//     stack.push("a");
//     stack.push("b");
//     stack.push("c");
//     stack.push("e");
//     stack.push("d");
//     string num=0;
//     stack.push(num);
//     stack.pop();
//     while(!stack.empty()){
//         cout << stack.top() <<" ";
//         stack.pop();
//     }
//     return 0;
// }
 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

// #include<bits/stdc++.h>
// using namespace std;
// bool problem(vector<int>&v){
//     int flag=0;
//     for(int i=1;i<v.size()-1;i++){
//          if((v[i]%2!=0 && v[i-1]%2!=0 && v[i+1]%2!=0)||(v[i]%2==0 && v[i-1]%2==0 && v[i+1]%2==0) ||(v[i-1]+v[i]+v[i+2])%2!=0){
//             flag=1;
//          }
//          else{
//             flag=0;
//          }
//     }
//     if(flag==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     // vector<int>v{1,1,2,3,4,4};
//     // vector<int>v{1,2,2,3,3,4};
//     // vector<int>v{1,1,2,2,3,3,4,4};
//     // vector<int>v{1,2,2,3,4,4};
//     // vector<int>v{2,2,2,2,3};
//     // vector<int>v{2,2,2,2,2};
//     // vector<int>v{1,2,3,4};
//     if(v.size()>2){
//         cout<<problem(v);
//     }
//     else{
//         cout<<"error 404";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// unordered_map<char, int>m;

// int romanToInt(string s){
//     m['I']=1;
//     m['V']=5;
//     m['X']=10;
//     m['L']=50;
//     m['C']=100;
//     m['D']=500;
//     m['M']=1000;
//     int result = 0;
//     int prevValue = 0;
//     for (int i = s.length() - 1; i >= 0; i--) {
//         int currentValue=m[s[i]];
//         if (currentValue<prevValue) {
//             result -=currentValue;
//         } else {
//             result +=currentValue;
//         }
//         prevValue = currentValue;
//     }
//     return result;
// }
// int main() {
//     string s;
//     cout<<"Enter a Roman numeral: ";
//     cin>>s;
//     int n= romanToInt(s);
//     cout<<"Numeric value:"<<n<< endl;
//     return 0;
// }


// {1,2,3,9}  sum=8;
// {1,2,4,4}  sum=8;



// #include<bits/stdc++.h>
// using namespace std;
// bool findPairPresent(const vector<int>&v,int sum){
//      unordered_set<int>s;
//      for(auto i:s){
//         if(s.find(i)!=s.end())
//             return true;
//         s.insert(sum-i);
//      }
//      return false;
// }
// int main(){
//     // vector<int>v{1,2,3,9};
//     vector<int>v{1,2,4,4};
//     // int sum=8;
//     int sum=8;
//     cout<<findPairPresent(v,sum)<<"\n";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void freq_status(int arr[],int n){
//     map<int,int>m;
//     for(int i;i<n;i++){
//         m[arr[i]]++;
//     }
//     bool count=false;
//     for(const auto &x:m){
//         if(x.second>1){
//             count=true;
//             return;
//         }
//     }
//     if(count){
//         cout<<"No\n";
//     }
//     else{
//         cout<<"Yes\n";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     freq_status(arr,n);  
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void merging_lists(list<int>&list1,list<int>&list2){
//     multiset<int>s;
//         for(const auto i:list1 ){
//             s.insert(i);
//         }
//         for(const auto i:list2){
//             s.insert(i);
//         }
//         for(auto i:s){
//             cout<<i<<" ";
//         }
// }
// int main(){
//     list<int>list1 ={1,2,4};
//     list<int>list2 ={1,3,4};
//     merging_lists(list1,list2);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int return_the_no(vector<int>&nums){
//     unordered_map<int,int>m;
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]]++;
//         }
//         int y=0;
//         for(const auto &x:m){
//             if(x.second>1){
//                 y=x.first;
//             }
//         }
//     return y;
// }
// int main(){
//     vector<int>nums{19,6,7,12,7};
//     cout<<return_the_no(nums);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void merge(vector<int>&nums1,int m, vector<int>&nums2,int n){
//     multiset<int>s;
//     for(int i=0;i<m;i++){
//         s.insert(nums1[i]);
//     }
//     for(int i=0;i<n;i++){
//         s.insert(nums2[i]);
//     }
//     for(auto i:s){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     vector<int>nums1 {1,2,3,0,0,0};
//     vector<int>nums2 {2,5,6};
//     int n=3,m=3;
//     merge(nums1,m,nums2,n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int x=1;
    // for(int i=0;i<n;i++){
    //     for(int j=(n-1);j>=0;j--){
    //         if((i+j)<(n-1)){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<x++;
    //         }
    //     }
    //     cout<<"\n";
    // }
    for (int i=n;i>=1;i--) { 
         for(int j=1; j < i; j++) { 
            cout<<" "; 
         } 
         for(int j=0;j<=(n-i); j++) { 
            cout<<x++; 
         }
         cout<<"\n"; 
    } 
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
