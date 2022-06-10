// nqueens problem

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool issafe(int row  ,int col ,vector<vector<int>> &matrix , vector<vector<int>> &visited , int n){
    // is this thing safe 
    int x = row;
    int y = col;
    
    while(y>=0){
        if(visited[x][y] == 1){
            return false;
        }
        y--;
    }

    x = row;
    y = col;
    while(x>=0 && y>=0 && x < n && y < n){

        if(visited[x][y] == 1){
            return false;
        }else{
            x--;
            y--;
        }
    }

    x = row;
    y = col;
    while(x>=0 && y>=0 && x < n && y < n){

        if(visited[x][y] == 1){
            return false;
        }else{
            x++;
            y--;
        }
    }

    return true;

}

void solve(int col ,vector<vector<int>> &board , vector<vector<int>> &visit , int n){
    if(col >= n){
        board = visit;
        return;
    }

    // save values in board matri
    
    for (int row = 0; row < n; row++)
    {
        if(issafe(row , col , board , visit , n)){
            visit[row][col] = 1;
            solve(col+1 , board , visit ,n );
            visit[row][col] = 0;
        }
    }
    
    
}

int main(){
    vector<vector<int>> matrix {
        {0 , 0 , 0 , 0},
        {0 , 0 , 0 , 0},
        {0 , 0 , 0 , 0},
        {0 , 0 , 0 , 0}
    }; // this is a matrix full of 0 values
    int n = 4;
    vector<vector<int>> visited ;
    visited = matrix;
    int col = 0;
    solve(col , matrix,visited , n);

    for(int i = 0;i<4;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<" ";
            // cout<<visited[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}