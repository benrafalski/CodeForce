#include <bits/stdc++.h>

using namespace std;

// After winning gold and silver in IOI 2014, Akshat and Malvika want to have some fun. Now they are playing a game on a grid made of n horizontal and m vertical sticks.

// An intersection point is any point on the grid which is formed by the intersection of one horizontal stick and one vertical stick.

// In the grid shown below, n = 3 and m = 3. There are n + m = 6 sticks in total (horizontal sticks are shown in red and vertical sticks are shown in green). There are n·m = 9 intersection points, numbered from 1 to 9.


// The rules of the game are very simple. The players move in turns. Akshat won gold, so he makes the first move. During his/her move, a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point. A player will lose the game if he/she cannot make a move (i.e. there are no intersection points remaining on the grid at his/her move).

// Assume that both players play optimally. Who will win the game?

// Input
// The first line of input contains two space-separated integers, n and m (1 ≤ n, m ≤ 100).

// Output
// Print a single line containing "Akshat" or "Malvika" (without the quotes), depending on the winner of the game.

#define ll long long

int main(){
    int n, m;
    cin >> n >> m;
    cout << ((n<m ? n:m)%2==0?"Malvika": "Akshat");
    return 0;
}
