#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void parenthesis(int open , int close , vector<string> &str , string output){
    if(open>close){
        return;
    }
    if(open == 0 && close == 0){
        str.push_back(output);
        return;
    }
    if(open ==0 && close != 0){
        parenthesis(open , close-1 , str , output+")");
    }
    else if (open !=0 && close !=0 ){
        parenthesis(open-1 , close , str , output+"(");
        parenthesis(open , close-1 , str , output+")");
    }
}

int main(){
    int n = 4;  
    int c = n/2;
    vector<string> str;
    string output = "(";
    parenthesis(c-1 , c ,str , output);
    for(auto k:str){
        cout<<k<<" ";
    }
    return 0;
}