#include <bits/stdc++.h>

using namespace std;

// Petr stands in line of n people, but he doesn't know exactly which position he occupies. He can say that there are no less than a people standing in front of him and no more than b people standing behind him. Find the number of different positions Petr can occupy.

// Input
// The only line contains three integers n, a and b (0 ≤ a, b < n ≤ 100).

// Output
// Print the single number — the number of the sought positions.

#define ll long long

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    cout << ((b+1)<(n-a)?(b+1):(n-a));
    return 0;
}
