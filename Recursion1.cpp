#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
void print(){
   
   if(cnt == 6) return;
   cout << cnt << endl;

   cnt++;

   print(); 
}

int main(){
      
    print();
    return 0;
}