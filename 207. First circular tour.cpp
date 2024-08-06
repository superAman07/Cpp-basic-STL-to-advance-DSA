// Basically we have give two arrays petrol[] and dist[], petrol[] denotes the petrol unit we can fill from that indexed petrol station
//and dist[] array shows how much unit consume to reach the next station ,So that we can again refill the tank of vehicle
//So we have to return that station from where we can start and reach from other side(consider array is circular)

// here is naive solution
// #include<iostream>
// using namespace std;
// int firstPetrolPump(int petrol[],int dist[],int n){
//     for(int start =0;start<n;start++){
//         int curr_petrol = 0;
//         int end = start;
//         while(true){
//             curr_petrol += (petrol[end]-dist[end]);
//             if(curr_petrol<0){
//                 break;
//             }
//             end = (end+1)%n;
//             if(end==start){
//                 return start+1;
//             }
//         }

//     }
// }
// int main(){
//     int n=4;
//     int arr[]{4,8,7,4};
//     int dist[]{6,5,3,5};
//     cout<<firstPetrolPump(arr,dist,n)<<endl;
//     return 0;
// }

// Efficient solution in O(n) time and O(1) space
#include<iostream>
using namespace std;
int firstPetrolPump(int petrol[],int dist[],int n){
     int start=0;
     int curr_pet=0;
     int prev_pet=0;
     for(int i=0;i<n;i++){
        curr_pet+=(petrol[i]-dist[i]);
        if(curr_pet<0){
            start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;
        }
     }
     return ((curr_pet+prev_pet)>=0)?start+1:-1;
}
int main(){
    int n=4;
    int arr[]{4,8,7,4};
    int dist[]{6,5,3,5};
    cout<<firstPetrolPump(arr,dist,n)<<endl;
    return 0;
}
