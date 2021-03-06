#include <bits/stdc++.h>

using namespace std;

// You are a lover of bacteria. You want to raise some bacteria in a box.

// Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly x bacteria in the box at some moment.

// What is the minimum number of bacteria you need to put into the box across those days?

// Input
// The only line containing one integer x (1 ≤ x ≤ 109).

// Output
// The only line containing one integer: the answer.

#define ll long long

int main(){
    ll x;
    cin >> x;
    int count = 0;
    for(int i = 0; i < 30; ++i){
        if(x & 0b1 == 1){
            count++;
        }
        x >>= 1;
    }

    cout << count;

    return 0;
}
