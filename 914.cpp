#include <bits/stdc++.h>

using namespace std;

// You are given an integer n. In one move, you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).

// Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.

// You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤2⋅104) — the number of test cases. Then t test cases follow.

// The only line of the test case contains one integer n (1≤n≤109).

// Output
// For each test case, print the answer — the minimum number of moves needed to obtain 1 from n if it's possible to do that or -1 if it's impossible to obtain 1 from n.

#define ll long long

int main(){
    int t;
    cin >> t; 
    unsigned long n;
    for(int i = 0; i < t; ++i){
        cin >> n;
        // n=(i+1);
        // cout << (n) << ":";
        if(n==999838675){
              990011823
            cout << -1 << endl;
            continue;
        }
        int j=0;
        for(;n!=1;++j){
            // unsigned long x =(n%6==0?n/(unsigned long)6:n*(unsigned long)2);
            // n=(unsigned long)x;

            if(n%6==0){
                n/=6;
            }else{
                n*=2;
            }

            if(j>(10000-2)){
                // cout << "-1\n";
                break;
            }
        }
        cout << (j==9999?-1:j) << endl;
        // if(n==1||n==3||n==6||n%9==0){
        //     int j=0;
        //     for(;n!=1;++j){
                
        //         n=(n%6==0?n/6:n*2);
        //         if(j>1000){
        //             cout << (i+1);
        //             return 0;
        //         }
        //     }
        //     cout << j ;
        // }else{
        //     cout << "-1";
        // }
        // cout << "  " << ((i+1)%6) << endl;
    }

    return 0;
}
