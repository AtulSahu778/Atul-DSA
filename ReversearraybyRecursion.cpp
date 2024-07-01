#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n) {           // Printing Function to print the reversed array
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
void reversearray(int arr[] , int s , int e){ // to reverse the array
    
    if(s < e){
        swap(arr[s], arr[e]); // swapping the array by using inbuilt swap function.
        
        reversearray(arr , s+1 , e-1); // Here recursive function works 
    }
   
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s =0, e=n-1;
    reversearray(arr,s,e);
    printArray(arr,n);
  return 0;
}