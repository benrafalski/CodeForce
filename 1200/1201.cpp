#include <bits/stdc++.h>

using namespace std;

// The Berland State University is hosting a ballroom dance in celebration of its 100500-th anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and quadrille moves.

// We know that several boy&girl pairs are going to be invited to the ball. However, the partners' dancing skill in each pair must differ by at most one.

// For each boy, we know his dancing skills. Similarly, for each girl we know her dancing skills. Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100) — the number of boys. The second line contains sequence a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is the i-th boy's dancing skill.

// Similarly, the third line contains an integer m (1 ≤ m ≤ 100) — the number of girls. The fourth line contains sequence b1, b2, ..., bm (1 ≤ bj ≤ 100), where bj is the j-th girl's dancing skill.

// Output
// Print a single number — the required maximum possible number of pairs.

#define ll long long

bool bpm(bool **bpGraph, int u,bool seen[], int matchR[], int N, int M)
{
    for (int v = 0; v < M; v++)
    {
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true;
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v], seen, matchR, N, M))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

int maxBPM(bool **bpGraph, int N, int M)
{
    int matchR[M];
    memset(matchR, -1, sizeof(matchR));
    int result = 0;
    for (int u = 0; u < N; u++)
    {
        bool seen[M];
        memset(seen, 0, sizeof(seen));
        if (bpm(bpGraph, u, seen, matchR, N, M))
            result++;
    }
    return result;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    int b[n];
    for(int i =0;i<n;++i){
        cin >> b[i];
    }
    cin >> m;
    int g[m];
    for(int i =0;i<m;++i){
        cin >> g[i];
    }

    bool **graph = new bool*[n];
    for(int i=0;i<n;++i){
        graph[i] = new bool[m];
        for(int j=0;j<m;++j){
            graph[i][j] = 0;
            if(abs(b[i]-g[j]) < 2){
                graph[i][j]=1;
            }
        }
    }

    cout << maxBPM(graph, n, m);





    return 0;
}
