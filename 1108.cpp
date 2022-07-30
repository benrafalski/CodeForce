#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define Y "YES\n"
#define N "NO\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        ll n,k;
        cin >> n >> k;
        if(pow(k,2) > n){
            cout << N;
        }
        else{
            cout << ((n%2==0)==(k%2==0)?Y:N);
        } 
    }


    return 0;
}
