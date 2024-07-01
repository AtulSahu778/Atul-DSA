#include<bits/stdc++.h>
using namespace std;
void printN(int i , int n){
  
  if(i < 1) return;
  cout << i << endl;

  printN(i-1 , n);

}
int main()
{
  int n=5;
  printN(n,n);
  return 0;
} 