#include <bits/stdc++.h>

using namespace std;

// Being a programmer, you like arrays a lot. For your birthday, your friends have given you an array a consisting of n distinct integers.

// Unfortunately, the size of a is too small. You want a bigger array! Your friends agree to give you a bigger array, but only if you are able to answer the following question correctly: is it possible to sort the array a (in increasing order) by reversing exactly one segment of a? See definitions of segment and reversing in the notes.

// Input
// The first line of the input contains an integer n (1 ≤ n ≤ 105) — the size of array a.

// The second line contains n distinct space-separated integers: a[1], a[2], ..., a[n] (1 ≤ a[i] ≤ 109).

// Output
// Print "yes" or "no" (without quotes), depending on the answer.

// If your answer is "yes", then also print two space-separated integers denoting start and end (start must not be greater than end) indices of the segment to be reversed. If there are multiple ways of selecting these indices, print any of them.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    int i=0, large=a[0];
    for(i=0; i<n-1;++i){
        if(a[i]>a[i+1]){
            large = a[i];
            break;
        }
    }

    // i=first index-1
    int j=i, small=a[n-1];
    for(;j<n-1;++j){
        if(a[j]<a[j+1]){
            small=a[j];
            break;
        }
    }

    int k;
    for(k=j;k<n-1;++k){
        if(a[k]>a[k+1]){
            break;
        }
    }

    if((j < n-1 ? large<a[j+1] : true)&&(i > 0 ? small>a[i-1] : true) && k==(n-1)){
        if(i==j&&i==k){
            cout << "yes\n" << 1 << " " << 1;
        }else cout << "yes\n" << (i+1) << " " << (j+1);
    }else cout << "no";




    return 0;
}
