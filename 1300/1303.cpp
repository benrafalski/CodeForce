#include <bits/stdc++.h>

using namespace std;

// Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

// After the cutting each ribbon piece should have length a, b or c.
// After the cutting the number of ribbon pieces should be maximum.
// Help Polycarpus and find the number of ribbon pieces after the required cutting.

// Input
// The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

// Output
// Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, abc[3];
    cin >> n >> abc[0] >> abc[1] >> abc[2];
    sort(abc,abc+3);
    int max=0;
    for(int i=0;i<4000;++i){
        for(int j=0;j<4000;++j){
            if(((n-(abc[2]*i))-(abc[1]*j)) >= 0 && ((n-(abc[2]*i))-(abc[1]*j))%abc[0]==0){
                if((((n-(abc[2]*i)-(abc[1]*j))/abc[0])+i+j)>max){
                    max= (((n-(abc[2]*i)-(abc[1]*j))/abc[0])+i+j);
                }
                    
            }
        }
    }

    cout << max;


    return 0;
}
