#include <bits/stdc++.h>

using namespace std;

// Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

// Input
// The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

// Output
// Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most m TV sets.

#define ll long long

int main(){
    int n,m;
    cin >> n >> m;
    int sum = 0;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        int key = a[i];
        int j = i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    // for(int i =0;i<n;++i){
    //     cout << a[i] << " ";
    // }
    // cout << a[(n-1)];

    for(int i=0; i <n && m>0;++i){
        // cout << a[i] << " ";
        if(a[i] < 0){
            m--;
            sum+=(a[i]*-1);
        }
    }

    cout << sum;

    return 0;
}
