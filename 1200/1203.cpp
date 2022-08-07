#include <bits/stdc++.h>

using namespace std;

// Iahub got bored, so he invented a game to be played on paper.

// He writes n integers a1, a2, ..., an. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values ak for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

// The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.

// Input
// The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a1, a2, ..., an. It is guaranteed that each of those n values is either 0 or 1.

// Output
// Print an integer — the maximal number of 1s that can be obtained after exactly one move.

#define ll long long
#define N (int)10e5




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    int ones=0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        if(a[i]==1){
            ones++;
        }
    }

    int count = 0, max = -1;
    for(int i = 0;i<n;++i){
        count = ones;
        for(int j=i;j<n;++j){
            if(a[j]==0){
                count++;
            }else{
                count--;
            }
            if(count > max){
                max = count;
            }
        }
        
    }
    cout << max;
    
    

    

    return 0;
}
