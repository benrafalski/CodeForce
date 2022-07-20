#include <bits/stdc++.h>

using namespace std;

// Kirito is stuck on a level of the MMORPG he is playing now. To move on in the game, he's got to defeat all n dragons that live on this level. Kirito and the dragons have strength, which is represented by an integer. In the duel between two opponents the duel's outcome is determined by their strength. Initially, Kirito's strength equals s.

// If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi, then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength, then he defeats the dragon and gets a bonus strength increase by yi.

// Kirito can fight the dragons in any order. Determine whether he can move on to the next level of the game, that is, defeat all dragons without a single loss.

// Input
// The first line contains two space-separated integers s and n (1 ≤ s ≤ 104, 1 ≤ n ≤ 103). Then n lines follow: the i-th line contains space-separated integers xi and yi (1 ≤ xi ≤ 104, 0 ≤ yi ≤ 104) — the i-th dragon's strength and the bonus for defeating it.

// Output
// On a single line print "YES" (without the quotes), if Kirito can move on to the next level and print "NO" (without the quotes), if he can't.

#define ll long long

int main(){
    int s,n;
    cin >> s >> n;
    int x[n],y[n];
    for(int i =0; i < n;++i){
        cin >> x[i] >> y[i];
    }

    for(int i =0;i<n;++i){
        int key_x = x[i];
        int key_y = y[i];
        int j = i-1;
        while(j >=0 && x[j] > key_x){
            x[j+1] = x[j];
            y[j+1] = y[j];
            j--;
        }
        x[j+1] = key_x;
        y[j+1] = key_y;
    }

    for(int i = 0; i < n;++i){
        if(s > x[i]){
            s+=y[i];
        }else{
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
