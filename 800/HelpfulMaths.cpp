#include <bits/stdc++.h>

using namespace std;

// Xenia the beginner mathematician is a third year student at elementary school. 
// She is now learning the addition operation.

// The teacher has written down the sum of multiple numbers. 
// Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. 
// Still, that isn't enough for Xenia. 
// She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. 
// For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

// You've got the sum that was written on the board. 
// Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

// Input
// The first line contains a non-empty string s — the sum Xenia needs to count. 
// String s contains no spaces. It only contains digits and characters "+". 
// Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

// Output
// Print the new sum that Xenia can count.

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    char sum[101];
    cin >> sum;
    int const len = strlen(sum);
    int sout[len];
    int j = 0;
    for(int i =0; i < len; ++i){
        if(isdigit(sum[i])){
            sout[j] = sum[i] - '0';
            j++;
        }
    }

    insertion_sort(sout, j);

    for(int i = 0; i < j; ++i){
        if(i == j-1){
            cout << sout[i];
        }else{
            cout << sout[i] << "+";
        }
    }

    return 0;
}
