// Find all distinct combinations of a given length with repetition allowed
// Given an integer array, find all distinct combinations of a given length k, where the repetition of elements is allowed.

// For example,

// Input:  {1, 2, 3}, k = 2
// Output: {1, 1}, {1, 2}, {1, 3}, {2, 2}, {2, 3}, {3, 3}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int j ,vector<int> arr , int k , vector<int> &ans){
    //base case 
    if(k<=0){
        for(auto i :ans){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }


    for (int i = j; i < arr.size(); i++)
    {
        if(k>0){
            ans.push_back(arr[i]);
            solve(i,arr , k-1 ,ans);
            //backtrack 
            ans.pop_back();
        }    
    }
    
}

int main(){
    vector<int> arr {1,2,5};
    int k = 2;
    vector<int> ans;
    solve(0,arr , k , ans);

    return 0;
}