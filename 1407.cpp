#include <bits/stdc++.h>


// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

// The next lecture in a high school requires two topics to be discussed. The i
// -th topic is interesting by ai
//  units for the teacher and by bi
//  units for the students.

// The pair of topics i
//  and j
//  (i<j
// ) is called good if ai+aj>bi+bj
//  (i.e. it is more interesting for the teacher).

// Your task is to find the number of good pairs of topics.

// Input
// The first line of the input contains one integer n
//  (2≤n≤2⋅105
// ) — the number of topics.

// The second line of the input contains n
//  integers a1,a2,…,an
//  (1≤ai≤109
// ), where ai
//  is the interestingness of the i
// -th topic for the teacher.

// The third line of the input contains n
//  integers b1,b2,…,bn
//  (1≤bi≤109
// ), where bi
//  is the interestingness of the i
// -th topic for the students.

// Output
// Print one integer — the number of good pairs of topic.

using namespace std;

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    // ai+aj>bi+bj to (ai−bi)+(aj−bj)>0
    // ci=ai−bi
    // ci+cj>0

    vector<int> c(n);

    for(int i = 0; i < n; ++i){
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());

    long long ans = 0;

    for(int i = 0; i < n; ++i){
        if(c[i] <= 0){
            continue; 
        }else{
            int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
            ans += i - pos;
        }
    }

    cout << ans << endl;





    return 0;
}
