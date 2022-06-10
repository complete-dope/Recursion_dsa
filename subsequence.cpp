// subset and subsequence both are a part of recursion phase;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequence(string s , vector<string> &str , int i , string ans){
    // standard code for subset and subsequence code !! 
    if(i >= s.length()){
        str.push_back(ans);
        return;
    }

    subsequence(s , str ,i+1 , ans + s[i]);
    subsequence(s , str ,i+1 , ans );

}

int main(){
    string s;
    s= "abc";
    vector<string> str ;
    subsequence(s , str , 0 ,"");
    for(auto j:str){
        cout<<j<<" ";
    }
    cout<<str.size()<<endl;
    return 0;
}