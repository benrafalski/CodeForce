#include <bits/stdc++.h>

using namespace std;

// You are given two positive integers n (1≤n≤109) and k (1≤k≤100). Represent the number n as the sum of k positive integers of the same parity (have the same remainder when divided by 2).

// In other words, find a1,a2,…,ak such that all ai>0, n=a1+a2+…+ak and either all ai are even or all ai are odd at the same time.

// If such a representation does not exist, then report it.

// Input
// The first line contains an integer t (1≤t≤1000) — the number of test cases in the input. Next, t test cases are given, one per line.

// Each test case is two positive integers n (1≤n≤109) and k (1≤k≤100).

// Output
// For each test case print:

// YES and the required values ai, if the answer exists (if there are several answers, print any of them);
// NO if the answer does not exist.
// The letters in the words YES and NO can be printed in any case.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0){
        ll n;
        int k;
        cin >> n >> k;

        if(k>n){
            cout << "NO\n";
        }else{
            if(n%2==0){
                if(k%2!=0){
                    if(n/k>=2){
                        cout << "YES\n";
                        for(int i =0;i<(k-1);++i){
                            cout << 2 << " ";
                        }
                        cout << (n-(2*(k-1))) << "\n";
                    }else{
                        cout << "NO\n";
                    }
                }else{
                    cout << "YES\n";
                    for(int i =0;i<(k-1);++i){
                        cout << 1 << " ";
                    }
                    cout << (n-(k-1)) << "\n"; 
                }
            }else{
                if(k%2!=0){
                    cout << "YES\n";
                    for(int i =0;i<(k-1);++i){
                        cout << 1 << " ";
                    }
                    cout << (n-(k-1)) << "\n"; 
                }else{
                    cout << "NO\n";
                }  
            }
        }
    }

    return 0;
}
