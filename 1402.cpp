#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

// When Valera has got some free time, he goes to the library to read some books. Today he's got t free minutes to read. That's why Valera took n books in the library and for each book he estimated the time he is going to need to read it. Let's number the books by integers from 1 to n. Valera needs ai minutes to read the i-th book.

// Valera decided to choose an arbitrary book with number i and read the books one by one, starting from this book. In other words, he will first read book number i, then book number i + 1, then book number i + 2 and so on. He continues the process until he either runs out of the free time or finishes reading the n-th book. Valera reads each book up to the end, that is, he doesn't start reading the book if he doesn't have enough free time to finish reading it.

// Print the maximum number of books Valera can read.

// Input
// The first line contains two integers n and t (1 ≤ n ≤ 105; 1 ≤ t ≤ 109) — the number of books and the number of free minutes Valera's got. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 104), where number ai shows the number of minutes that the boy needs to read the i-th book.

// Output
// Print a single integer — the maximum number of books Valera can read.

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> n >> t;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }


    int i;
    int tot=0;
    int max=0;
    for(i=0;i<n;++i){
        if(n-i<=max){
            break;
        }
        int j;
        for(j=i,tot=0;j<n;++j){
            if(tot+a[j]>t){
                break;
            }
            tot+=a[j];
        }
        if((j-i)>max){
            max=j-i;
        }
    }
    cout << (max);



    return 0;
}
