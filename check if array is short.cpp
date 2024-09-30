 #include<iostream>
 using namespace std;
 //int main(){
 //   int n,c=0;
 //   cout<<"Enter the number of elements: ";
 //   cin>>n;
 //   int arr[n];
 //   for(int i=0;i<n;i++){
 //       cout<<"Enter the value of "<<i+1<<" place \n";
 //       cin>>arr[i];
 //   }
 //   for(int i=0;i<n;i++){
 //       if(arr[i]>arr[i+1]){
 //           c+=1;
 //       }
 //       else{
 //           c==0;
 //       }
 //   }
 //   if(c!=0){
 //       cout<<"No";
 //   }
 //   else{
 //       cout<<"Yes";
 //   }
 //   return 0;
 //}
 bool shorted(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
        return false; 
    }
    else{
        return true;
    }
    }
 }
 int main(){
    int n,arr[n];
    cout<<"Enter the value of n: ";
    cin>>n;
    if(shorted(n,arr)==0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    return 0;
 }