// Find all n-digit numbers with a given sum of digits
// Find all n–digit numbers with a given sum where n varies from 1 to 9 and sum <= 81 (Maximum possible sum in a 9–digit number).

// For example,

// 3–digit numbers with sum 6 are
 
// 105 114 123 132 141 150 204 213 222 231 240 303 312 321 330 402 411 420 501 510 600


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string s, int n , int target){
    if(n == 0 && target!=0){
        return ;
    }

    if(n !=0 && target >= 0){
        char d = '0';
        if(s == ""){
            d = '1';
        }

        while(d<='9'){
            solve(s+d ,n-1 ,target -(d-'0'));
            d++;
        }

    }

    else if(n ==0 && target ==0){
        cout<<s<<endl;
    }
}

int main(){
    int n = 6;
    int target = 6;
    string s = "";
    solve(s , n , target);

    return 0;
}