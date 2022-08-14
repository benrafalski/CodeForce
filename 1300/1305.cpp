#include <bits/stdc++.h>

using namespace std;

// Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

// Your task is to write a program which calculates two things:

// The maximum beauty difference of flowers that Pashmak can give to Parmida.
// The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
// Input
// The first line of the input contains n (2 ≤ n ≤ 2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1 ≤ bi ≤ 109).

// Output
// The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll max=0,min=MAX;
    ll nmax=0,nmin=0;


    ll b[n];
    for(int i=0;i<n;++i){
        cin >> b[i];
        if(b[i]>max){
            max = b[i];
        }
        if(b[i]<min){
            min = b[i];
        }
    }

    for(int i=0;i<n;++i){
        if(b[i]==max){
            nmax++;
        }else if(b[i]==min){
            nmin++;
        }
    }




    if(max==min){
        cout << 0 << " " << ((n*(n-1))/2);
    }else cout << (max-min) << " " << (nmax*nmin);

    return 0;
}
