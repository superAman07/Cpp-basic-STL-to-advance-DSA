#include<iostream>
using namespace std;
const int n=4;
const int m=4;
void search(int arr[][m],int x){
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(arr[i][j]==x){
            cout<<"Element found at index ("<<i<<","<<j<<")"<<endl;
            return;
        }
        else if(arr[i][j]>x)j--;
        else i++;
    }
    cout<<"Not Found\n";
}
int main(){
    int x = 29;
    int arr[][m]{{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(arr,x);
    return 0;
}
