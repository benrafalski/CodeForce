#include <bits/stdc++.h>

using namespace std;

// Recall that the sequence b is a a subsequence of the sequence a if b can be derived from a by removing zero or more elements without changing the order of the remaining elements. For example, if a=[1,2,1,3,1,2,1], then possible subsequences are: [1,1,1,1], [3] and [1,2,1,3,1,2,1], but not [3,2,3] and [1,1,1,1,2].

// You are given a sequence a consisting of n positive and negative elements (there is no zeros in the sequence).

// Your task is to choose maximum by size (length) alternating subsequence of the given sequence (i.e. the sign of each next element is the opposite from the sign of the current element, like positive-negative-positive and so on or negative-positive-negative and so on). Among all such subsequences, you have to choose one which has the maximum sum of elements.

// In other words, if the maximum length of alternating subsequence is k then your task is to find the maximum sum of elements of some alternating subsequence of length k.

// You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

// The first line of the test case contains one integer n (1≤n≤2⋅105) — the number of elements in a. The second line of the test case contains n integers a1,a2,…,an (−109≤ai≤109,ai≠0), where ai is the i-th element of a.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105 (∑n≤2⋅105).

// Output
// For each test case, print the answer — the maximum sum of the maximum by size (length) alternating subsequence of a.

#define ll long long
#define N (int)10e5

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i=0;i<t;++i){
        int n;
        cin >> n;
        ll a[n];
        ll max = -1, min = (ll)10e9;
        for(int j=0;j<n;++j){
            cin >> a[j];

        }
        ll sum = 0;
        for(int j=0;j<n;++j){
            
            if(j==n-1){
               if(a[j]>0){
                    if(a[j]>max){
                        max = a[j];
                        
                    }
                    sum+=max;
                }else{

                    if(abs(a[j])<min){
                        min = abs(a[j]);
                        
                    }
                    sum+=(min*-1);
                } 
                break;
            }


            if(a[j]>0){

                if(a[j]>max){
                    max = a[j];
                }
                if(a[j+1]<0){
                    // store max
                    sum+=max;
                    // cout << sum << " ";
                    max = -1;
                }
            }else{

                if(abs(a[j])<min){
                    min = abs(a[j]);
                }
                
                if(a[j+1]>0){
                    // store min
                    sum+=(min*-1);
                    // cout << sum << " ";
                    min = (ll)10e9;
                }
            }
        }

        // if(n>1 && ()){
        //     if((a[n-1]>0&&a[n-2]<0) || (a[n-1]<0&&a[n-2]>0)){
        //         // diff signs
        //         sum+=a[n-1];
        //     }else{
        //         if(a[n-1]>0 && a[n-1]>a[n-2]){

        //         }
        //     }




            
        // }

        // cout << endl;
        cout << sum << "\n";
        // break;
    }

    return 0;
}
