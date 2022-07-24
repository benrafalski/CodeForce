#include <bits/stdc++.h>

using namespace std;

// Dreamoon wants to climb up a stair of n steps. He can climb 1 or 2 steps at each move. Dreamoon wants the number of moves to be a multiple of an integer m.

// What is the minimal number of moves making him climb to the top of the stairs that satisfies his condition?

// Input
// The single line contains two space separated integers n, m (0 < n ≤ 10000, 1 < m ≤ 10).

// Output
// Print a single integer — the minimal number of moves being a multiple of m. If there is no way he can climb satisfying condition print  - 1 instead.

#define ll long long

int main(){
    int n,m;
    cin >> n >> m;
    if(n<m){
        cout << -1;
        return 0;
    }else {
        int h = n/2 + (n%2);
        while(h<=n){
            if(h%m==0){
                cout << h;
                break;
            }else{
               h++; 
            }
        }
        
    }
    

    return 0;
}
