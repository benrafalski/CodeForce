#include <bits/stdc++.h>

using namespace std;

// For the given integer n (n>2) let's write down all the strings of length n which contain n−2 letters 'a' and two letters 'b' in lexicographical (alphabetical) order.

// Recall that the string s of length n is lexicographically less than string t of length n, if there exists such i (1≤i≤n), that si<ti, and for any j (1≤j<i) sj=tj. The lexicographic comparison of strings is implemented by the operator < in modern programming languages.

// For example, if n=5 the strings are (the order does matter):

// aaabb
// aabab
// aabba
// abaab
// ababa
// abbaa
// baaab
// baaba
// babaa
// bbaaa
// It is easy to show that such a list of strings will contain exactly n⋅(n−1)2 strings.

// You are given n (n>2) and k (1≤k≤n⋅(n−1)2). Print the k-th string from the list.

// Input
// The input contains one or more test cases.

// The first line contains one integer t (1≤t≤104) — the number of test cases in the test. Then t test cases follow.

// Each test case is written on the the separate line containing two integers n and k (3≤n≤105,1≤k≤min(2⋅109,n⋅(n−1)2).

// The sum of values n over all test cases in the test doesn't exceed 105.

// Output
// For each test case print the k-th string from the list of all described above strings of length n. Strings in the list are sorted lexicographically (alphabetically).

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- > 0){
        int n,k;
        cin >> n >> k;
        int i;
        for(i=0;k-i>0;++i){
            k-=i;
        }

        for(int j=0;j<n;++j){
            if(j==((n)-k)||((n-1)-i)==j){
                cout << 'b';
            }else{
                cout << 'a';
            }
        } 
        cout << "\n";
    }
    

    

    return 0;
}
