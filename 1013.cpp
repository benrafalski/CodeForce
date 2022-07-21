#include <bits/stdc++.h>

using namespace std;

// One day Vasya decided to have a look at the results of Berland 1910 Football Championship’s finals. Unfortunately he didn't find the overall score of the match; however, he got hold of a profound description of the match's process. On the whole there are n lines in that description each of which described one goal. Every goal was marked with the name of the team that had scored it. Help Vasya, learn the name of the team that won the finals. It is guaranteed that the match did not end in a tie.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100) — the number of lines in the description. Then follow n lines — for each goal the names of the teams that scored it. The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols. It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.

// Output
// Print the name of the winning team. We remind you that in football the team that scores more goals is considered the winner.

#define ll long long

int main(){
    int n;
    cin >> n;
    char t1[11],t2[11];
    cin >> t1;
    int s1=1,s2=0;
    for(int i = 1; i < n; ++i){
        char tn[11];
        cin >> tn;
        if(strcmp(t1,tn)==0){
            s1++;
        }else{
            strcpy(t2,tn);
            s2++;
        }
    }
    cout << (s1>s2?t1:t2);

    return 0;
}
