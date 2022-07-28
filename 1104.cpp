#include <bits/stdc++.h>

using namespace std;

// One day Dima and Alex had an argument about the price and quality of laptops. Dima thinks that the more expensive a laptop is, the better it is. Alex disagrees. Alex thinks that there are two laptops, such that the price of the first laptop is less (strictly smaller) than the price of the second laptop but the quality of the first laptop is higher (strictly greater) than the quality of the second laptop.

// Please, check the guess of Alex. You are given descriptions of n laptops. Determine whether two described above laptops exist.

// Input
// The first line contains an integer n (1 ≤ n ≤ 105) — the number of laptops.

// Next n lines contain two integers each, ai and bi (1 ≤ ai, bi ≤ n), where ai is the price of the i-th laptop, and bi is the number that represents the quality of the i-th laptop (the larger the number is, the higher is the quality).

// All ai are distinct. All bi are distinct.

// Output
// If Alex is correct, print "Happy Alex", otherwise print "Poor Alex" (without the quotes).

struct ab{
    int a;
    int b;
};

#define ll long long

void merge(ab arr[], int const left, int const mid, int const right)
{
    auto const subOne = mid - left + 1;
    auto const subTwo = right - mid;

    auto *leftArr = new ab[subOne], *rightArr = new ab[subTwo];

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
        if (leftArr[indexOfSubOne].a <= rightArr[indexOfSubTwo].a)
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

void merge_sort(ab arr[], int const begin, int const end)
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
    cin>>n;

    ab arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i].a>>arr[i].b;
    }

    merge_sort(arr,0,n-1);

    for(int i = 0;i<n-1;++i){
        if(arr[i].b>arr[i+1].b){
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";






    return 0;
}
