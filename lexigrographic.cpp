// Find all lexicographic permutations of a string
// In this post, we will see how to find all lexicographic permutations of a string where the repetition of characters is allowed.

// For example, consider string ABC. It has the following lexicographic permutations with repetition of characters:

// AAA AAB AAC ABA ABB ABC ACA ACB ACC BAA BAB BAC BBA BBB BBC BCA BCB BCC CAA CAB CAC CBA CBB CBC CCA CCB CCC


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string s , string str){
    if(s.length() == str.length()){
        cout<<str<<" ";
        return;
    }

    
    for(int i =0;i<s.length();i++){
        solve(s, str+s[i]);
    }
}


int main(){
    string s ="AB";
    int n =s.length() ;
    string str = "";
    int iter = 0;
    solve(s ,str);
    return 0;
}