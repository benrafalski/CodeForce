#include <bits/stdc++.h>

using namespace std;

// There exists an island called Arpa’s land, some beautiful girls live there, as ugly ones do.

// Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given n, print the last digit of 1378n.


// Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.

// Input
// The single line of input contains one integer n (0  ≤  n  ≤  109).

// Output
// Print single integer — the last digit of 1378n.

#define ll long long

int main(){
    ll n;
    cin >> n;
    if(n==0){
        cout << 1;
    }else if(n%4==0){
        cout << 6;
    }else if(n%4==1){
        cout << 8;
    }else if(n%4==2){
        cout << 4;
    }else if(n%4==3){
        cout << 2;
    }

    return 0;
}
