#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

// C. Drazil and Factorial

using namespace std;

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;

    string ch[10]={"","","2","3","223","5","53","7","7222","7332"};

    string str,an;
    cin>>str;
    for(int i =0; i < str.size(); i++) an+=ch[str[i]-'0'];

    sort(an.begin(), an.end());
    reverse(an.begin(), an.end());
    cout<<an<<endl;

    return 0;
}
