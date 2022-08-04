#include <bits/stdc++.h>

using namespace std;

// You are given an array a of n integers. Count the number of pairs of indices (i,j) such that i<j and aj−ai=j−i.

// Input
// The first line contains one integer t (1≤t≤104). Then t test cases follow.

// The first line of each test case contains one integer n (1≤n≤2⋅105).

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤n) — array a.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case output the number of pairs of indices (i,j) such that i<j and aj−ai=j−i.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i =0;i<t;++i){
        int n;
        cin >> n;
        int a[n];
        for(int j=0;j<n;++j){
            cin >> a[n];
        }
        int count = 0;
        for(int j=0;j<n-1;++j){
            for(int k=j;k<n;k++){
                if(k-j==a[k]-a[j]){
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}
