#include<bits/stdc++.h>
using namespace std;
void More_func_in_vector(vector<int>v){
    v.pop_back(); // pop_back() fx is to remove the last element of vector v
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n"<<v.front()<<"\n";  //front() fx for reference of 1st value of v
    cout<<v.back()<<"\n";   // back() fx is for reference of last value of v
}
void More_fun_in_vector(vector<int>v){
    v.pop_back();
    v.front()=277;
    cout<<v.front()<<" ";
    cout<<v.back()<<"\n";
}
int main(){
    vector<int>v{10,17,27,28};
    More_func_in_vector(v);
    More_fun_in_vector(v);
    return 0;
}
     

        // insert function
       
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,20,7,28};
    v.insert(v.begin(),100);
    v.insert(v.begin()+2,200);
    v.insert(v.begin(),2,333);
    for(auto x:v){
        cout<<x<<" ";
    }
    vector<int>v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);
    for(auto x:v2){
        cout<<"\n"<<x<<" ";
    }
    return 0;
}


       // erase function

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,20,30,27};
    v.erase(v.begin()); // remove first element
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin(),v.end()-1);// remove from 1st to last-1 elements 
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}

    // clear and empty function

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,20,30,207};
    v.clear();
    cout<<v.size()<<"\n";
    if(v.empty()==true)
    cout<<"Empty\n";
    else
    cout<<"Not empty\n";
    return 0;
}

     // resize function

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,44,69,9};
    v.resize(3);
    cout<<"Decreasing size of vector\n";
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Increasing size of vector\n";
    v.resize(5);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"\n"<<"increasing size more with default value 277\n";
    v.resize(7,277);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
