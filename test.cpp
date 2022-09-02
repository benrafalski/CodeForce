#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = 'ôãêøù';

    // f4  e3  ea  f8  f9
    // nypbc
    // cout << "hfdaophfioaphgpa;hgp;a\n";
    for(int i=0;i<5;++i){
        
        s[i] = s[i] ^ '\x9a';
    }
    cout << s;


    return 0;
}
