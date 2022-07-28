#include <bits/stdc++.h>

using namespace std;

// A and B are preparing themselves for programming contests.

// B loves to debug his code. But before he runs the solution and starts debugging, he has to first compile the code.

// Initially, the compiler displayed n compilation errors, each of them is represented as a positive integer. After some effort, B managed to fix some mistake and then another one mistake.

// However, despite the fact that B is sure that he corrected the two errors, he can not understand exactly what compilation errors disappeared — the compiler of the language which B uses shows errors in the new order every time! B is sure that unlike many other programming languages, compilation errors for his programming language do not depend on each other, that is, if you correct one error, the set of other error does not change.

// Can you help B find out exactly what two errors he corrected?

// Input
// The first line of the input contains integer n (3 ≤ n ≤ 105) — the initial number of compilation errors.

// The second line contains n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 109) — the errors the compiler displayed for the first time.

// The third line contains n - 1 space-separated integers b1, b2, ..., bn - 1 — the errors displayed at the second compilation. It is guaranteed that the sequence in the third line contains all numbers of the second string except for exactly one.

// The fourth line contains n - 2 space-separated integers с1, с2, ..., сn - 2 — the errors displayed at the third compilation. It is guaranteed that the sequence in the fourth line contains all numbers of the third line except for exactly one.

// Output
// Print two numbers on a single line: the numbers of the compilation errors that disappeared after B made the first and the second correction, respectively.

#define ll long long

void merge(ll arr[], int const left, int const mid, int const right)
{
    auto const subOne = mid - left + 1;
    auto const subTwo = right - mid;

    auto *leftArr = new int[subOne], *rightArr = new int[subTwo];

    for (auto i = 0; i < subOne; i++)
    {
        leftArr[i] = arr[left + i];
    }
    for (auto j = 0; j < subTwo; j++)
    {
        rightArr[j] = arr[mid + 1 + j];
    }

    auto indexOfSubOne = 0, indexOfSubTwo = 0;
    int indexOfMerge = left;
    while (indexOfSubOne < subOne && indexOfSubTwo < subTwo)
    {
        if (leftArr[indexOfSubOne] <= rightArr[indexOfSubTwo])
        {
            arr[indexOfMerge] = leftArr[indexOfSubOne];
            indexOfSubOne++;
        }
        else
        {
            arr[indexOfMerge] = rightArr[indexOfSubTwo];
            indexOfSubTwo++;
        }
        indexOfMerge++;
    }
    while (indexOfSubOne < subOne)
    {
        arr[indexOfMerge] = leftArr[indexOfSubOne];
        indexOfSubOne++;
        indexOfMerge++;
    }

    while (indexOfSubTwo < subTwo)
    {
        arr[indexOfMerge] = rightArr[indexOfSubTwo];
        indexOfSubTwo++;
        indexOfMerge++;
    }
}

void merge_sort(ll arr[], int const begin, int const end)
{
    if (begin >= end)
    {
        return;
    }
    auto mid = begin + (end - begin) / 2;
    merge_sort(arr, begin, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >>n;
    ll a[n];
    ll b[n-1];
    ll c[n-2];

    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    for(int i=0;i<n-1;++i){
        cin >> b[i];
    }

    for(int i=0;i<n-2;++i){
        cin >> c[i];
    }

    merge_sort(a,0,n-1);
    merge_sort(b,0,n-2);
    merge_sort(c,0,n-3);

    for(int i=0;i<n;++i){
        if(a[i]!=b[i]){
            cout << a[i] << "\n";
            break;
        }
    }

    for(int i=0;i<n;++i){
        if(c[i]!=b[i]){
            cout << b[i] << "\n";
            break;
        }
    }
    


    return 0;
}
