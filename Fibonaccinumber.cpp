#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
  if(n == 0){
    cout << "0" << endl;
  }
  else if(n == 1){
    cout << "0" << " 1" << endl;
  }
  else{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(auto i=2; i<n; i++){
      fib[i] = fib[i-1] + fib[i-2];
    }
    cout << "The fibonacci num series till " << n << " is" << endl;
    for(auto i=0; i<n; i++){
      cout << fib[i] << endl;
    } 
  }
}
int main()
{
  fibo(20);
  return 0;
}