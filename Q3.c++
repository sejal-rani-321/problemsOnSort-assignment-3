// Q3. Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include<iostream>
using namespace std;

 SelectionShot(int arr[],int n, int k){
    for (int i = 0; i < k; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[min])
            min = j;
        }
     swap(arr[min], arr[i]);

    }
    
   }

 void printArray(int arr[], int n){
     for (int i = 0; i < n; i++){
         cout<<arr[i]<<" ";
     } cout<<endl;
 }

int main(){
   int arr[] = {2,1,4,3,6,5};
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 3;
   SelectionShot(arr, n,k);
   printArray(arr,n);

   return 0;
 
}

