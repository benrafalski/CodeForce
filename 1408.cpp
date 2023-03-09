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

    int num;
    cin >> num;

    vector<int> a;
    for(int i = 0; i < n; ++i){
        int val = num%10;
        num /= 10; 

        switch(val){
            case 2:
                a.push_back(2);
                break;
            case 3:
                a.push_back(3);
                break;
            case 4:
                a.push_back(3);
                a.push_back(2);
                a.push_back(2);
                break;
            case 5:
                a.push_back(5);
                break;
            case 6:
                a.push_back(5);
                a.push_back(3);
                break;
            case 7:
                a.push_back(7);
                break;
            case 8:
                a.push_back(7);
                a.push_back(2);
                a.push_back(2);
                a.push_back(2);
                break;
            case 9:
                a.push_back(7);
                a.push_back(3);
                a.push_back(3);
                a.push_back(2);
                break;
            default: 
                a.push_back(-1);
                break;
        }


    }


    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for(auto it : a){
        if(it != -1) cout << it;
    }




    return 0;
}
