#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
        return true;
    }
}
int main()
{
    string s = "skdpnyegmds";
    if(checkPalindrome(s)){
        cout << "String is palindrome";
    }
    else{
        cout << "String is not palindrome";
    }
  return 0;
}
 // code by atul sahu