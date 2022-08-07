#include <bits/stdc++.h>

using namespace std;

// Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

// Input
// The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

// Output
// Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int countodd=0,counteven=0;
    int indexodd,indexeven;

    for(int i =0;i<n;++i){
        int x;
        cin >> x;

        if(x%2==0){
            counteven++;
            indexeven=i+1;
        }else{
            countodd++;
            indexodd=i+1;
        }

        if(counteven>1&&countodd==1){
            cout << indexodd;
            break;
        }

        if(countodd>1&&counteven==1){
            cout << indexeven;
            break;
        }

    }

    return 0;
}
