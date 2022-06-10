// Remove adjacent duplicate characters from a string
// Given a string, remove adjacent duplicates characters from it. In other words, remove all consecutive same characters except one.

// For example,

// Input:  AABBBCDDD
 
// Output: ABCD


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string str = "";

void solve(string s, int n){
    if(n == 0){
        return;
    }

    if(str[-1] == s[0]){
        s = s.substr(1);
        solve(s , n-1);
    }
    else{
        str += to_string(s[0]);
        solve(s.substr(1) , n-1 );
    }
}


int main(){
    string s = "AABBBCDDD";
    int n = s.length();
    // string str = "";
    solve(s , n );
    // cout<<str<<endl;
    cout<<"hello"<<endl;
    return 0;
}