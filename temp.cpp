#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s){
    int l=0; int e = s.length() - 1;
    if(!isalnum(s[l])){
        l++;
    }
    if(!isalnum(s[e])){
        e--;
    }
    else if(tolower(s[l] != tolower(s[e]))) return false;

    else{
        l++;
        e--;
    }
    return true;
}
int main(){ 
    string s;
    cout<< "Enter a string: " << endl;
    cin >> s;
    if(palindrome(s)){
        cout << s << "is a palindrome " << endl; 
    }
    else{
        cout << s << " is NOT a palindrome " << endl; 
    }
    
 
return 0;
}