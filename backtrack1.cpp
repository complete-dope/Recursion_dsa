#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool issafe(int x  , int y , int (&visited)[4][4] , int (&matrix)[4][4]){
    if(x < 4 && y < 4 && x>=0 && y>=0 && visited[x][y] == 0 && matrix[x][y] == 1){
        return true;
    }
    return false;
}


void ratinamaze(int (&matrix)[4][4] , int (&visited)[4][4] , vector<string> &str , int s1 ,int s2 , int r1 , int r2 , string &output){
    if(s1 == r1 && s2 == r2){
        str.push_back(output);
        return;
    }
    visited[s1][s2] = 1; 
    
    //down
    int new1 = s1+1;
    int new2 = s2;
    if(issafe(new1 , new2 , visited , matrix)){
        // cout<<"dn"<<endl;
        output.push_back('D');
        ratinamaze(matrix , visited , str , s1 , s2 ,r1 ,r2 ,output);
        output.pop_back();
    }

    new1 = s1-1;
    new2 = s2;
    if(issafe(new1 , new2 , visited , matrix)){
        // cout<<"up"<<endl;
        output.push_back('U');
        ratinamaze(matrix , visited , str , s1 , s2 ,r1 ,r2 ,output);
        output.pop_back();
    }

    new1 = s1;
    new2 = s2-1;
    if(issafe(new1 , new2 , visited , matrix)){
        // cout<<"lf"<<endl;
        output.push_back('L');
        ratinamaze(matrix , visited , str , s1 , s2 ,r1 ,r2 ,output);
        output.pop_back();
    }

    new1 = s1;
    new2 = s2+1;
    if(issafe(new1 , new2 , visited , matrix)){
        // cout<<"rft"<<endl;
        output.push_back('R');
        ratinamaze(matrix , visited , str , s1 , s2 ,r1 ,r2 ,output);
        output.pop_back();
    }

    visited[s1][s2] = 0; 
}

int main(){
    //this is just for 4,4
    int matrix[4][4] = {{1, 0, 0, 0},
                    {1, 1, 0, 1}, 
                    {1, 1, 0, 0},
                    {0, 1, 1, 1}};
    
    int visited[4][4] = {0};
    // memset(visited , -1 , sizeof(visited));
    vector<string> str;
    string opt = "";
    // cout<<"called"<<endl;

    // ratinamaze(matrix , visited , str , 0 , 0 , 3 , 3 , opt); //code not working pls debug it 

    cout<<"print it "<<str.size()<<endl;
    return 0;
}