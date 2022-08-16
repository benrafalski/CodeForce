#include <bits/stdc++.h>

// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

// Vasya has found a strange device. On the front panel of a device there are: a red button, a blue button and a display showing some positive integer. After clicking the red button, device multiplies the displayed number by two. After clicking the blue button, device subtracts one from the number on the display. If at some point the number stops being positive, the device breaks down. The display can show arbitrarily large numbers. Initially, the display shows number n.

// Bob wants to get number m on the display. What minimum number of clicks he has to make in order to achieve this result?

// Input
// The first and the only line of the input contains two distinct integers n and m (1 ≤ n, m ≤ 104), separated by a space .

// Output
// Print a single number — the minimum number of times one needs to push the button required to get the number m out of number n.

#define ll long long
#define FOR(t) while(t-- > 0)
#define EACH(x,a) for(auto&x:a)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> adj[10001];
    for(int i=1;i<=10000;++i){
        adj[i].push_back(i-1);
    }
    for(int i=0;i*2<=10000;++i){
        adj[i].push_back(i*2);
    }

    int distance[10001];
    bool processed[10001];
    memset(processed,0,sizeof(processed));
    int x = n;
    queue<pair<int,int>> q;
    for(int i=1;i<=10000;++i) distance[i]=50000;
    distance[x] = 0;
    q.push({0,x});
    while(!q.empty()){
        int a=q.front().second;
        q.pop();
        if(processed[a]) continue;
        processed[a] = true;
        for(auto&u:adj[a]){
            int b=u;
            if(distance[a]+1 < distance[b]){
                distance[b] = distance[a]+1;
                q.push({-distance[b],b});
            }
        }

    }

    cout << distance[m] << endl;



    return 0;
}
