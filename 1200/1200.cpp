#include <bits/stdc++.h>

using namespace std;

// Ann has recently started commuting by subway. We know that a one ride subway ticket costs a rubles. Besides, Ann found out that she can buy a special ticket for m rides (she can buy it several times). It costs b rubles. Ann did the math; she will need to use subway n times. Help Ann, tell her what is the minimum sum of money she will have to spend to make n rides?

// Input
// The single line contains four space-separated integers n, m, a, b (1 ≤ n, m, a, b ≤ 1000) — the number of rides Ann has planned, the number of rides covered by the m ride ticket, the price of a one ride ticket and the price of an m ride ticket.

// Output
// Print a single integer — the minimum sum in rubles that Ann will need to spend.

#define ll long long
#define N (int)10e5

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,a,b;
    cin >> n >> m >> a >> b;
    cout << ((b/m>=a)?(n*a):((n/m*b)+(((n%m)*a) < (b) ? n%m*a : (n%m==0)?0:b)));




    return 0;
}
