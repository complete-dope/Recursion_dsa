#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void permute(string s , vector<string> &str , string ans){ 
    if(s.length() == 0){
        str.push_back(ans);
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        string s1 = s.substr(i, 1);
        string lfprt = s.substr(0 , i);
        string rgtprt = s.substr(i+1);
        permute(lfprt + rgtprt , str , ans + s1);
    }
}

void permute2(string s , vector<string> str , string ans){
    // using the swap feature

    if(index >= s.length()){
        ans.push_back(ans);
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        swap(s[] , s[])
    }
    
}

int main(){
    string s = "abcd";
    vector<string> str;

    permute(s , str , "");
    for(auto i : str){
        cout<<i<<endl;
    }

    //swap krwa ke bhi ho skta hai yeh question solve
    return 0;
}