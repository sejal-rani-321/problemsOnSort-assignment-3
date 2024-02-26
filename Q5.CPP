// Q5. Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.

#include<iostream>
using namespace std;


valueK(int arr[], int n){
    int l=0, r = 1e9;
    for (int i = 0; i < n-1; i++){
      if(arr[i+1] > arr[i]){
        r = min(r, (arr[i] + arr[i+1]) / 2);
      }  
      else if(arr[i+1] < arr[i]){
        l = max(l, (arr[i] + arr[i+1] + 1)/ 2);
      }  
     
      }
  if(l>r){
    count << "-1";
  }   
  else
  cout<<1<<endl;
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

    cout << valueK(arr,n);
    // printArray(arr,n);
    return 0;
}