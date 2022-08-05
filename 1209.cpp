#include <bits/stdc++.h>

using namespace std;

// Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

// Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

// Input
// The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

// Output
// Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

#define ll long long
#define MAX (ll)10e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    unsigned ll x;
    cin >> x;

    bool first=true;

    int arr[18];
    int size=0;

    while(x!=0){
        if(x%10>4){
            if((x/10==0&&x==9)){
                
                arr[size]=9;
            }
            else arr[size]= 9-(x%10);
        }else{
            arr[size] = (x%10);
        }
        x /= 10;
        size++;
        first=false;
    }
    for(int i=size-1;i>=0;--i){
        cout << arr[i];
    }

    return 0;
}
