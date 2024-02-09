#include<iostream>
#include<algorithm>
using namespace std;
void binary_fun(int arr[],int n){
    sort(arr,arr+5);
    if(binary_search(arr,arr+5,n)){
        cout<<"Present\n";
    }
    else{
        cout<<"Not Present\n";
    }
}
int main(){
    int arr[]{23,42,1,63,27,31};
    int n=28;
    binary_fun(arr,n);
    return 0;
}


//Naive Solution O(n^1/2)

// #include<iostream>
// using namespace std;
// int sqRoot(int n){
//     int i=1;
//     while(i*i<=n){
//         i++;
//     }
//     return (i-1);
// }
// int main(){
//     int x;
//     cin>>x;
//     cout<<sqRoot(x);
//     return 0;
// }

// Efficient solution using Binary Search

#include<iostream>
using namespace std;
int sqRoot(int n){
    int low = 1, high = n,ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            low = mid+1;
            ans = mid;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    int x;
    cin>>x;
    cout<<sqRoot(x);
    return 0;
}
