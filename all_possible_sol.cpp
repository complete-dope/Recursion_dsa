// Print all combinations of numbers from 1 to `n` having sum `n`
// Given a positive integer n, print all combinations of numbers between 1 and n having sum n.

// For example,

// For n = 5, the following combinations are possible:
 
// { 5 }
// { 1, 4 }
// { 2, 3 }
// { 1, 1, 3 }
// { 1, 2, 2 }
// { 1, 1, 1, 2 }
// { 1, 1, 1, 1, 1 }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void solve(int n , vector<int> &arr){
//     //decrease n

//     // cout<<"inside"<<endl;
//     if(n <= 0){
//         for(auto i : arr){
//             cout<<i<<" ";
//         }cout<<endl;
//         return;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         // cout<<"i is "<<i<<" n-i would be "<<n-i<<endl;
//         arr.push_back(i);
//         // cout<<"last element of vector is "<<arr.back()<<endl;
//         solve(n-i , arr);
//         arr.pop_back();
        
//     }
    
// }

void solve(int start , int n , vector<int> &arr){
    //decrease n

    // cout<<"inside"<<endl;
    if(n <= 0){
        for(auto i : arr){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }

    for (int j = start; j <= n; j++)
    {
        // cout<<"j js "<<j<<" n-j would be "<<n-j<<endl;
        arr.push_back(j);
        // cout<<"last element of vector js "<<arr.back()<<endl;
        solve(j,n-j , arr);
        arr.pop_back();
    }
}


int main(){
    int n = 3;
    vector<int> arr;
    solve(1 ,n , arr);
    return 0;
}