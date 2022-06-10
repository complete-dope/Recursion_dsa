#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
unordered_set<string> values;
string save;
void solve(string s1 ,string s2 , int n1 , int n2 , string str){
    // cout<<"solve"<<" ";
    if(n1==0 || n2==0){
        if(save.length() < str.length()){
            save = str;
        }
        // ans.push_back(str);
        // values.insert(str);
        return;
    }

    if(s1[n1-1] == s2[n2-1]){
        str.push_back(s1[n1-1]);
        solve(s1 , s2 ,n1-1 ,n2-1 , str);
        // str.pop_back();
    }

    else{
        solve(s1 , s2 ,n1 ,n2-1 , str);
        solve(s1 , s2 ,n1-1 ,n2 , str);
    }
}

int main(){
    string s1 = "hitmo";
    string s2 = "mohitboy";
    int n1 = s1.length();
    int n2 = s2.length();
    solve(s1,s2,n1,n2 , "");
    cout<<endl;
    cout<<ans.size()<<endl;
    // cout<<str<<endl;
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    cout<<save<<" "<<endl;

    // for(auto i :values){
    //     cout<<i<<" ";
    // }
    return 0;
}