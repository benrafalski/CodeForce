#include <bits/stdc++.h>

using namespace std;

// Sereja has an array a, consisting of n integers a1, a2, ..., an. The boy cannot sit and do nothing, he decided to study an array. Sereja took a piece of paper and wrote out m integers l1, l2, ..., lm (1 ≤ li ≤ n). For each number li he wants to know how many distinct numbers are staying on the positions li, li + 1, ..., n. Formally, he want to find the number of distinct numbers among ali, ali + 1, ..., an.?

// Sereja wrote out the necessary array elements but the array was so large and the boy was so pressed for time. Help him, find the answer for the described question for each li.

// Input
// The first line contains two integers n and m (1 ≤ n, m ≤ 105). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105) — the array elements.

// Next m lines contain integers l1, l2, ..., lm. The i-th line contains integer li (1 ≤ li ≤ n).

// Output
// Print m lines — on the i-th line print the answer to the number li.

#define ll long long
#define N (int)10e5

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    int n,m;
    cin >> n >> m;
    int a[N];
    int dup[n];
    int b[n];

    for(int i=0;i<N;++i){
        a[i]=0;
    }

    for(int i=0;i<n;++i){
        dup[i]=0;
    }


    for(int i =0;i<n;++i){
        cin >> b[i];
    }

    for(int i=n-1;i>=0;--i){
        a[b[i]]++;
        dup[i]++;
        if(a[b[i]]>1){
            dup[i]--;
        }
    }

    int h[n];
    h[n-1]=1;
    for(int i=n-2;i>=0;--i){
        h[i]=h[i+1]+dup[i];
    }



    for(int i=0;i<m;++i){
        int l;
        cin >> l;
        cout << h[l-1] << "\n";

    }

    return 0;
}
