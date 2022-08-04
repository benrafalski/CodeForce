#include <bits/stdc++.h>

using namespace std;

// Shubham has an array a of size n, and wants to select exactly x elements from it, such that their sum is odd. These elements do not have to be consecutive. The elements of the array are not guaranteed to be distinct.

// Tell him whether he can do so.

// Input
// The first line of the input contains a single integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains two integers n and x (1≤x≤n≤1000) — the length of the array and the number of elements you need to choose.

// The next line of each test case contains n integers a1,a2,…,an (1≤ai≤1000) — elements of the array.

// Output
// For each test case, print "Yes" or "No" depending on whether it is possible to choose x elements such that their sum is odd.

// You may print every letter in any case you want.

#define ll long long
#define MAX (ll)10e9


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        int x,n;
        cin >> n >> x;
        int a[n];
        int odd=0,even=0;
        for(int j=0;j<n;++j){
            cin >> a[j];
            odd+=(a[j]%2==0?0:1);
            even+=(a[j]%2==0?1:0);
        }
        if((even==0&&x%2==0)||odd==0||(odd%2==0&&n==x)) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;
}
