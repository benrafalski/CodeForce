#include <bits/stdc++.h>

using namespace std;

// Emuskald needs a fence around his farm, but he is too lazy to build it himself. So he purchased a fence-building robot.

// He wants the fence to be a regular polygon. The robot builds the fence along a single path, but it can only make fence corners at a single angle a.

// Will the robot be able to build the fence Emuskald wants? In other words, is there a regular polygon which angles are equal to a?

// Input
// The first line of input contains an integer t (0 < t < 180) — the number of tests. Each of the following t lines contains a single integer a (0 < a < 180) — the angle the robot can make corners at measured in degrees.

// Output
// For each test, output on a single line "YES" (without quotes), if the robot can build a fence Emuskald wants, and "NO" (without quotes), if it is impossible.

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t;++i){
        int a;
        cin>>a;
        bool y=false;
        for(int j =3,deg=180; j<500;++j){
            if(deg/j==a&&deg%j==0){
                y=true;
                break;
            }
            deg+=180;
        }
        cout << (y?"YES\n":"NO\n");

    }

    return 0;
}
