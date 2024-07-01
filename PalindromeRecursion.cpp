#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n, string s){
    if(n >= s.length()/2) return true;

    if(s[n] != s[s.length() - n - 1]) return false;

    return palindrome(n+1,s);
}
int main()
{
    if(palindrome(0,"lol"))
    {
        cout << "It is a Palindrome " << endl;
    }
    else{
        cout << "It is not a Palindrome " << endl;
    }

  return 0;
}