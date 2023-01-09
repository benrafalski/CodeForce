#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)

// Vasya has n days of vacations! So he decided to improve his IT skills and do sport. Vasya knows the following information about each of this n days: whether that gym opened and whether a contest was carried out in the Internet on that day. For the i-th day there are four options:

// on this day the gym is closed and the contest is not carried out;
// on this day the gym is closed and the contest is carried out;
// on this day the gym is open and the contest is not carried out;
// on this day the gym is open and the contest is carried out.
// On each of days Vasya can either have a rest or write the contest (if it is carried out on this day), or do sport (if the gym is open on this day).

// Find the minimum number of days on which Vasya will have a rest (it means, he will not do sport and write the contest at the same time). The only limitation that Vasya has — he does not want to do the same activity on two consecutive days: it means, he will not do sport on two consecutive days, and write the contest on two consecutive days.

// Input
// The first line contains a positive integer n (1 ≤ n ≤ 100) — the number of days of Vasya's vacations.

// The second line contains the sequence of integers a1, a2, ..., an (0 ≤ ai ≤ 3) separated by space, where:

// ai equals 0, if on the i-th day of vacations the gym is closed and the contest is not carried out;
// ai equals 1, if on the i-th day of vacations the gym is closed, but the contest is carried out;
// ai equals 2, if on the i-th day of vacations the gym is open and the contest is not carried out;
// ai equals 3, if on the i-th day of vacations the gym is open and the contest is carried out.
// Output
// Print the minimum possible number of days on which Vasya will have a rest. Remember that Vasya refuses:

// to do sport on any two consecutive days,
// to write the contest on any two consecutive days.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;  

    int a[n];
    int rest = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    
    // 3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3
    // c g c g c g c r c g r c g c g c g c g c g r g c g c g r g c r r c g c g 
    // rest=0, gym=1; contest=2
    int last_day = -1;
    for(int i =0; i < n; ++i){
        if(a[i] == 0){
            // if 0 then he has to rest
            rest++;
            last_day=0;
        }else if(a[i] == 1){
            // if 1 then he has to rest or do the contest
            if(last_day!=2){
                last_day=2;
            }else{
                rest++;
                last_day=0;
            }
        }else if(a[i] == 2){
            // if 2 then he has to rest or do the gym
            if(last_day!=1){
                last_day=1;
            }else{
                rest++;
                last_day=0;
            }
        }else if(a[i] == 3){
            // if 3 then he has to rest, do the gym or do the contest
            if(last_day==2){
                last_day=1;
            }else if(last_day==1){
                last_day=2;
            }
        }
    }

    cout << rest;



    return 0;
}
