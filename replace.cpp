// Replace every array element with the product of every other element without using a division operator
// Given an integer array, replace each element with the product of every other element without using the division operator.

// For example,

// Input:  { 1, 2, 3, 4, 5 }
// Output: { 120, 60, 40, 30, 24 }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int size(int arr[]){
    int cnt = 0;
    int i = 0;
    while(arr[i] != NULL){
        cnt++;
        i++;
    }
    return cnt;
};

int[] concatinate(int lft[] , int rft[]){
    int a = size(lft);
    int b  = size(rft);
    
    int concat[a+b];
    for (int i = 0; i < a; i++)
    {
        concat[i] = lft[i];

    }
    for (int j = a; j < b; j++)
    {
        concat[j] = lft[j];
        
    }

    return concat;
}

void replace(int arr[5] , int *ans[5]){

    for(int i =0;i<5;i++){
        int lft[] =  
    }

}


int main(){
    int arr[5] = {1,2,3,4,5};
    int ans[5] = {1,1,1,1,1};

    replace(arr ,&ans);
    for(int i =0;i<5;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}