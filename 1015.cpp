#include <bits/stdc++.h>

using namespace std;

// Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t. Find some number that satisfies both of them.

// Your task is: given the n and t print an integer strictly larger than zero consisting of n digits that is divisible by t. If such number doesn't exist, print  - 1.

// Input
// The single line contains two numbers, n and t (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) — the length of the number and the number it should be divisible by.

// Output
// Print one such positive number without leading zeroes, — the answer to the problem, or  - 1, if such number doesn't exist. If there are multiple possible answers, you are allowed to print any of them.

#define ll long long

int main(){
    int n,t;
    cin >> n >> t;
    if(t==10){
        if(n==1){
            cout << -1;
        }else{
            for(int i = 0; i < (n-1);++i){
                cout << 1;
            }
            cout << 0;
        }
    }else{
        for(int i =0; i < n;++i){
            cout << t;
        }
    }
    
    

    

    return 0;
}
