#include <bits/stdc++.h>

using namespace std;

// We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

// You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

// Input
// The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

// Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

// Output
// Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.

#define ll long long
#define MAX 333334

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    unsigned ll roots[1001];
    for(int i=0;i<1000;++i){
        roots[i]=i*i;
    }


    int n;
    cin >> n;
    while(n-- > 0){
        unsigned ll x;
        cin >> x;
        unsigned ll sx = sqrt(x);

        bool flag = true;

        if(x!=1&&(sx*sx)==x){
            for(int i=2;i<1000;++i){
                if(x%roots[i]==0 && roots[i]!=x){
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << "YES\n";
            }
        }
        else cout << "NO\n";
    }


    

    return 0;
}
