// Repeating element Conditions arr size >=2, only one element is repeats and all
// elements from 0 to max(arr) are present

//O(n) naive solution

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]{0,2,1,3,2,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i+1]){
//             cout<< arr[i];
//             break;
//         }
//     }
//     return 0;
// }

// Efficient approach in O(n) time and O(n) space
// #include<iostream>
// using namespace std;
// int repeatedElem(int arr[], int n){
//     bool visited[]{false,false,false,false,false,false};
//     for(int i=0;i<n;i++){
//         if(visited[arr[i]]==true){
//             return arr[i];
//         }
//         visited[arr[i]]=true;
//     }
//     return 0;
// }
// int main(){
//     int arr[]{0,2,1,3,2,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<repeatedElem(arr,n);
//     return 0;
// }

// efficient in O(n) time and O(1) space from 0 to max(array elements).

#include<iostream>
using namespace std;
int repeatedElem(int arr[]){
    int slow = arr[0]+1,fast = arr[0]+1;
    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    }while(slow!=fast);
    slow = arr[0]+1;
    while(slow!=fast){
        fast = arr[fast]+1;
        slow = arr[slow]+1;
    }
    return slow -1;
}
int main(){
    // int arr[]{0,2,1,3,2,2};
    int arr[]{0,2,1,3,5,4,6,2};
    cout<<repeatedElem(arr);
    return 0;
}

// if we need to change range from 1 to max(arr element) then remove +1 from above code 
