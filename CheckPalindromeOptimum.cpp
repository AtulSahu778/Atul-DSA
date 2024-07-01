#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string& s){
    int l=0 , r=s.length()-1; // l =left pointer and r = right pointer.
    if(!isalnum(s[l]))
    l++;
    else if(!isalnum(s[r]))
    r--;
    else if(tolower(s[l]) != towlower(s[r])) return false; 

    else{
        l++;
        r--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    if(Palindrome(s)){
        cout << s << " is a Palindrome" << endl;
    }
    else {
        cout << s << " is not a Palindrome" << endl;
    }
  return 0;
}