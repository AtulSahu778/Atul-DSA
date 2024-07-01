#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}
void factorialsec(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout  << fact << endl;
}
int main()
{
    cout << factorial(5) << endl;
    factorialsec(5);
  return 0;
}