#include <bits/stdc++.h>

using namespace std;

// It is lunch time for Mole. His friend, Marmot, prepared him a nice game for lunch.

// Marmot brought Mole n ordered piles of worms such that i-th pile contains ai worms. He labeled all these worms with consecutive integers: worms in first pile are labeled with numbers 1 to a1, worms in second pile are labeled with numbers a1 + 1 to a1 + a2 and so on. See the example for a better understanding.

// Mole can't eat all the worms (Marmot brought a lot) and, as we all know, Mole is blind, so Marmot tells him the labels of the best juicy worms. Marmot will only give Mole a worm if Mole says correctly in which pile this worm is contained.

// Poor Mole asks for your help. For all juicy worms said by Marmot, tell Mole the correct answers.

// Input
// The first line contains a single integer n (1 ≤ n ≤ 105), the number of piles.

// The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 103, a1 + a2 + ... + an ≤ 106), where ai is the number of worms in the i-th pile.

// The third line contains single integer m (1 ≤ m ≤ 105), the number of juicy worms said by Marmot.

// The fourth line contains m integers q1, q2, ..., qm (1 ≤ qi ≤ a1 + a2 + ... + an), the labels of the juicy worms.

// Output
// Print m lines to the standard output. The i-th line should contain an integer, representing the number of the pile where the worm labeled with the number qi is.

#define ll long long
#define N (int)10e5

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll b[n];
    cin >> b[0];
    for(int i = 1;i<n;++i){
        ll a;
        cin >> a;
        b[i] = b[i-1]+a;
    }

    int m;
    cin >> m;
    for(int i =0;i<m;++i){
        ll x;
        cin >> x;
        int k;
        int l = 0, h = n-1;
        while (l <= h) {
        k = (l+h)/2;
        if (b[k] == x) {
            break;
        }
        if (b[k] > x) h = k-1;
        else l = k+1;
        k = h+1;
        }
        cout << k+1 << "\n";
    }
    

    return 0;
}
