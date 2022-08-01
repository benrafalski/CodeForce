#include <bits/stdc++.h>

using namespace std;

// Ilya the Lion wants to help all his friends with passing exams. They need to solve the following problem to pass the IT exam.

// You've got string s = s1s2... sn (n is the length of the string), consisting only of characters "." and "#" and m queries. Each query is described by a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

// Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the problem.

#define ll long long
#define N (int)10e5

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    char n[N+1];
    int m;
    cin >> n;
    cin >> m;

    int a[strlen(n)];
    int sum[strlen(n)];


    for(int i =0;i<strlen(n);++i){
        a[i+1]=(n[i]==n[i+1]?1:0);
    }

    sum[0]=0;
    for(int i=1;i<strlen(n);++i){
        sum[i] = sum[i-1] + a[i];   
    }
    
    for(int i =0;i<m;++i){
        int l,r;
        cin >> l >> r;
        cout << sum[r-1]-sum[l-1] << "\n";
        
    }


    return 0;
}
