/*
Find all combinations of elements satisfying given constraints
Given a positive number n, find all combinations of 2×n elements such that every element from 1 to n appears exactly twice and the distance between its two appearances is exactly equal to the value of the element.

For example,

Input: n = 3
Output:
3 1 2 1 3 2
2 3 1 2 1 3

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int total , vector<int> arr , int index){
    if(index > total){
        for(auto i:arr){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }

    for (int i = 0; i < 2*total; i++)
    {
        if(arr[i] == -1 && i+index+1 < 2*total && arr[i+index+1] == -1){
            arr[i] = index;
            arr[i+index+1] = index;

            solve(total , arr , index+1);

            arr[i] = -1;
            arr[i+index+1] = -1;
        }
    }
  
}



int main(){
    int n = 3;
    vector<int> arr(2*n , -1);


    int index = 1;
    solve(n , arr , index);
    return 0;
}