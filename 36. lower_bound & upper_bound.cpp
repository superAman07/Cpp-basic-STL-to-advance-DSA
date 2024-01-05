      // lower_bound

#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(30);
    auto it=s.lower_bound(8);  // element isn't +nt it returns just greater element
    // auto it=s.lower_bound(15);  //lowest element
    // auto it=s.lower_bound(35);   // greatest of greater
    if(it!=s.end()){
        cout<<*it<<' ';
    }
    else{
        cout<<"element is greatest \n";
    }
    return 0;
}


     // upper_bound

#include<iostream>
#include<set>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(30);
    // auto it=s.lower_bound(8);  // element isn't +nt it returns just greater element
    auto it=s.upper_bound(5);  //it returns the next greater...its the diff b/w upper and lower bound.
    // auto it=s.upper_bound(35);   // greatest of greater
    if(it!=s.end()){
        cout<<*it<<' ';
    }
    else{
        cout<<"element is greatest \n";
    }
    return 0;
}
