#include<bits/stdc++.h>
using namespace std;
void printNum(int i, int n){
   if(i > n) return;
   cout << i << endl;

   printNum(i+1, n); 
}
int main()
{
    int i,n=9;
    printNum(i,n);
  return 0;
}