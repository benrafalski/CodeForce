#include <bits/stdc++.h>

using namespace std;

// You are given one integer number n. Find three distinct integers a,b,c such that 2≤a,b,c and a⋅b⋅c=n or say that it is impossible to do it.

// If there are several answers, you can print any.

// You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤100) — the number of test cases.

// The next n lines describe test cases. The i-th test case is given on a new line as one integer n (2≤n≤109).

// Output
// For each test case, print the answer on it. Print "NO" if it is impossible to represent n as a⋅b⋅c for some distinct integers a,b,c such that 2≤a,b,c.

// Otherwise, print "YES" and any possible such representation.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;


        bool found = true;
        for(int i=2;i*i<=n;++i){
            if(n%i==0){
                for(int j=i+1;j*j<=n;++j){
                    if((n/i)%j==0&&j!=(n/i)/j&&i!=((n/i)/j)){
                        cout << "YES\n";
                        cout << i << " " <<  j << " " << (n/i)/j << endl;
                        found=false;
                        break;
                    }
                }
                if(!found){
                    break;
                }
            }
        }
        if(found){
            cout << "NO\n";
        }
    }

    return 0;
}
