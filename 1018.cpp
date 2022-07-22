#include <bits/stdc++.h>

using namespace std;

// Let's consider a table consisting of n rows and n columns. The cell located at the intersection of i-th row and j-th column contains number i × j. The rows and columns are numbered starting from 1.

// You are given a positive integer x. Your task is to count the number of cells in a table that contain number x.

// Input
// The single line contains numbers n and x (1 ≤ n ≤ 105, 1 ≤ x ≤ 109) — the size of the table and the number that we are looking for in the table.

// Output
// Print a single number: the number of times x occurs in the table.

#define ll long long

int main(){
    int n;
    ll x;
    cin >> n >> x;
    int f=0;
    for(int i =1;i<=n;++i){
        if(x%i==0&&x/i<=n){
            f++;
        }
    }
    cout << f;


    return 0;
}
