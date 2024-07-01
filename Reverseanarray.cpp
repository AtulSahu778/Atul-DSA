#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size){
    int reversearray[size];
    for(int i=0; i<size; i++){
        reversearray[i] = arr[size-i-1]; 
    }
    for(int i=0; i<size; i++){
        cout << reversearray[i] << endl; 
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr , n);
  return 0;
}