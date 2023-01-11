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

    // 3849516 Y
    // 218 N

    // 1000000(3) + 100000(8) + 10000(4) + 1000(9) + 100(5) + 10(1) + 1(6)

    int multiples[1000];
    for(int i =0;i<1000;++i){
        multiples[i] = 11*i;
    }


    int t;
    cin >> t;

    // x = 11a + 111b
    // b = 11c + d
    // x = 11(a + 111c) + 111d

    int n;
    string result;
    for(int i = 0; i < t; ++i){
        cin >> n;
        result = "NO\n";

        if(n > 1099){
            result = "YES\n";
        }else{
            int d1 = n%10;
            int d2 = (n/10)%10;
            int d3 = (n/100)%10;
            int d4 = (n/1000)%10;

            if(n%11==0 || n%111==0){
                result = "YES\n";
            }else{
                int nn = n;
                while(nn > 0){
                    if(nn%11==0){
                        result = "YES\n";
                        break;
                    }
                    nn -= 111;
                }

                while(n > 0){
                    if(n%111==0){
                        result = "YES\n";
                        break;
                    }
                    n -= 11;
                }
                
            }
        }

        cout << result;
    }

    
    


    return 0;
}


