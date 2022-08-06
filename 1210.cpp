#include <bits/stdc++.h>

using namespace std;

// Pashmak has fallen in love with an attractive girl called Parmida since one year ago...

// Today, Pashmak set up a meeting with his partner in a romantic garden. Unfortunately, Pashmak has forgotten where the garden is. But he remembers that the garden looks like a square with sides parallel to the coordinate axes. He also remembers that there is exactly one tree on each vertex of the square. Now, Pashmak knows the position of only two of the trees. Help him to find the position of two remaining ones.

// Input
// The first line contains four space-separated x1, y1, x2, y2 ( - 100 ≤ x1, y1, x2, y2 ≤ 100) integers, where x1 and y1 are coordinates of the first tree and x2 and y2 are coordinates of the second tree. It's guaranteed that the given points are distinct.

// Output
// If there is no solution to the problem, print -1. Otherwise print four space-separated integers x3, y3, x4, y4 that correspond to the coordinates of the two other trees. If there are several solutions you can output any of them.

// Note that x3, y3, x4, y4 must be in the range ( - 1000 ≤ x3, y3, x4, y4 ≤ 1000).

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(y1==y2){
        cout << x1 << " " << (y1+(x2-x1)) << " " << x2 << " " << (y2+(x2-x1));
    }else if(x1==x2){
        cout << (x1+(y2-y1)) << " " << y1 << " " << (x2+(y2-y1)) << " " << y2;
    }else{
        if(((y2-y1)/(x2-x1)==1||(y2-y1)/(x2-x1)==-1)&&(y2-y1)%(x2-x1)==0){
            cout << x1 <<" " << y2 << " " << x2 << " " << y1 ;
        }else{
            cout << -1;
        }
    }

    return 0;
}
