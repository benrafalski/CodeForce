#include <bits/stdc++.h>

using namespace std;

// n participants of the competition were split into m teams in some manner so that each team has at least one participant. After the competition each pair of participants from the same team became friends.

// Your task is to write a program that will find the minimum and the maximum number of pairs of friends that could have formed by the end of the competition.

// Input
// The only line of input contains two integers n and m, separated by a single space (1 ≤ m ≤ n ≤ 109) — the number of participants and the number of teams respectively.

// Output
// The only line of the output should contain two integers kmin and kmax — the minimum possible number of pairs of friends and the maximum possible number of pairs of friends respectively.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;
    cin >> n >> m;

    ll max = ((n-(m-1))*((n-(m-1))-1))/2;
    ll min = (((n%m)*((((((n/m)+1))*(((n/m)+1)-1))/2))) + ((m)-(n%m))*(((((n/m)))*(((n/m))-1))/2));
    cout << min << " " << max;


    return 0;
}
