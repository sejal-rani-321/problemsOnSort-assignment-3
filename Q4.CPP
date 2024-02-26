// Q4. Find the minimum operations required to sort the array in increasing order. In one operation ,
// you can set each occurrence of one element to 0.

#include<iostream>
using namespace std;


Min_Op(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
      if(arr[i-1] > arr[i]){
        int add = arr[i-1] - arr[i] + 1;
        count += add;
        arr[i] += add;
      }  
     
      }
  return count;    
}

void printArray(int arr[], int n){
    
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
 }

int main(){
    int arr[] = {1,5,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << Min_Op(arr,n);
    // printArray(arr,n);
    return 0;
}