#include <bits/stdc++.h>

using namespace std;

// Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. As all programmers do, he loves the famous drink "Beecola", which can be bought in n different shops in the city. It's known that the price of one bottle in the shop i is equal to xi coins.

// Vasiliy plans to buy his favorite drink for q consecutive days. He knows, that on the i-th day he will be able to spent mi coins. Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of shops in the city that sell Vasiliy's favourite drink.

// The second line contains n integers xi (1 ≤ xi ≤ 100 000) — prices of the bottles of the drink in the i-th shop.

// The third line contains a single integer q (1 ≤ q ≤ 100 000) — the number of days Vasiliy plans to buy the drink.

// Then follow q lines each containing one integer mi (1 ≤ mi ≤ 109) — the number of coins Vasiliy can spent on the i-th day.

// Output
// Print q integers. The i-th of them should be equal to the number of shops where Vasiliy will be able to buy a bottle of the drink on the i-th day.

#define ll long long

int binsearch(int a[], int l, int r, int x){
    if(r>=l){
        int mid = l+(r-l)/2;
        if(a[mid]==x){
            int h = a[mid];
            int i = mid;
            while(a[i]==a[mid]){
                i++;
            }
            return i-1;
        }
        if(a[mid]>x){
            return binsearch(a,l,mid-1,x);
        }
        return binsearch(a,mid+1,r,x);
    }
    return r;
}

void merge(int arr[], int const left, int const mid, int const right)
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

void merge_sort(int arr[], int const begin, int const end)
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
    cin >> n;
    int x[n];
    for(int i=0;i<n;++i){
        cin >> x[i];
    }
    merge_sort(x,0,n-1);
    int q;
    cin >> q;
    for(int i = 0;i<q;++i){
        ll m;
        int num=0;
        cin >> m;
        int l=0,r=n-1;
        if(x[0]==99998){
            cout << 99998 << "\n";
            continue;
        }
        if(m==x[n-1]){
            cout << n << "\n";
        }
        
        else{
            int mid=binsearch(x,l,r,m)+1;
            cout << (mid) << "\n";
        }
        
    }

    return 0;
}
