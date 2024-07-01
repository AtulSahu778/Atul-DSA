#include<bits/stdc++.h>
using namespace std;

void sumofNnumParameterwise(int i, int sum){
  
  if(i < 1){
    cout << i << endl;
    return;
  }
  sumofNnumParameterwise(i-1 , sum+i); // see notes for better understanding
}

int sumofNnumFnwise(int n){

  if(n==0){
    return 0;
  }
  
  return n + sumofNnumFnwise(n-1); // see notes for better understanding


}


int main()
{
  int i=3;
  sumofNnumParameterwise(i,0);
  cout << sumofNnumFnwise(i) << endl;
  return 0;
}