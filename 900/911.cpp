#include <bits/stdc++.h>

using namespace std;

// Recently Vova found n candy wrappers. He remembers that he bought x candies during the first day, 2x candies during the second day, 4x candies during the third day, …, 2k−1x candies during the k-th day. But there is an issue: Vova remembers neither x nor k but he is sure that x and k are positive integers and k>1.

// Vova will be satisfied if you tell him any positive integer x so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n. It is guaranteed that at least one solution exists. Note that k>1.

// You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

// The only line of the test case contains one integer n (3≤n≤109) — the number of candy wrappers Vova found. It is guaranteed that there is some positive integer x and integer k>1 that x+2x+4x+⋯+2k−1x=n.

// Output
// Print one integer — any positive integer value of x so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n.

#define ll long long

int main(){
    int t, n;
    cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> n;
        int k = 3;
        int h = 1;
        while(1){
            if(n%k==0){
                cout << (n/k) << "\n";
                break;
            }else{
                h++;
                k += pow(2, h);
            }
    
        }
    }

    

    return 0;
}
