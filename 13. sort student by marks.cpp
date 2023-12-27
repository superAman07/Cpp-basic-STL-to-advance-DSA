#include<bits/stdc++.h>
using namespace std;
void sort_student_by_marks(int rollNo[],int marks[],int n){
    pair<int,int>rank[n];
    for(int i=0;i<n;i++){
        rank[i]={marks[i],rollNo[i]};
    }
    sort(rank,rank+n,greater());
    for(int i=0;i<n;i++){
        cout<<rank[i].second<<" "<<rank[i].first<<"\n";
    }
}
int main(){
    int n=5;
    int rollNo[]{101,108,103,105};
    int marks[]{70,80,40,90};
    sort_student_by_marks(rollNo,marks,n);
    return 0;
}

    // using Vector

#include<bits/stdc++.h>
using namespace std;
void cmpare(pair<int,int>p1,pair<int,int>p2);
void rank_using_vector(int marks[],int rollno[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({rollno[i],marks[i]});
    }
    sort(v.begin(),v.end(),cmpare);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}
void cmpare(pair<int,int>p1,pair<int,int>p2){
    return p1.second>p2.second;
}
int main(){
    int n=5;
    int marks[]{70,80,40,90};
    int rollno[]{101,108,103,105};
    rank_using_vector(marks,rollno,n);
    return 0;
}

    // another way 

// #include<bits/stdc++.h>
// using namespace std;
// void rank_using_vector_of_students(int marks[],int rollno[],int n){
//     vector<pair<int,int>>v;
//     for(int i=0;i<n;i++){
//         v.push_back({marks[i],rollno[i]});
//     }
//     sort(v.begin(),v.end(),greater<pair<int,int>>());
//     for(auto x:v){
//         cout<<x.second<<" "<<x.first<<"\n";
//     }
// }
// int main(){
//     int n=5;
//     int marks[]{70,80,40,90};
//     int rollno[]{101,108,103,105};
//     rank_using_vector_of_students(marks,rollno,n);
//     return 0;
// }
