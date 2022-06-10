#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int *arr , int n){
    if(n==1){
        return arr[0];
    }

    return arr[0] + sum(arr+1 , n-1);
}

void reverse(string &str , int i , int j){
    if(i>=j){ // odd i==j and even i>j
        return;
    }
    else{
        swap(str[i] , str[j]);
    }
    return reverse(str , i+1 , j-1);
    
}

void reversee(string & str , int  i){
    int a  = str.length()-1-i;
    if(i>=str.length()/2){
        return;
    }
    else{
        swap(str[i] , str[a]);
    }

    reversee(str , i+1);
}

int powerr(int a , int b ){
    if(b==0){
        return 1;
    }

    return a * power(a , b-1);
} // kafffi fuddu code kiya hai yeh maine --> not at all worth the recursion 


//power if  b== even we get (a^b/2 * a^b/2)

// power if b== odd we get a *(( a^b/2 * a^b/2))

int power(int a , int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a , b/2);

    if(b%2==0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}
 
int main(){
    // int arr[4] = {1,2,3,4};

    // int a  = sum(arr , 4);
    // cout<<a<<endl;

    // string aaaa  = "mohit";
    // int aa = aaaa.length();
    // // reverse(aaaa , 0, aa-1);
    // reversee(aaaa , 0);

    // cout<<aaaa<<endl;

    int ans = power(3 ,3);
    cout<<ans<<endl;
    return 0;
}