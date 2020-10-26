#include <bits/stdc++.h>
using namespace std;

const int MAXN=100000;

int N, answer[MAXN], at = 0;
vector<int> adj[MAXN];

int main() {
    cin >> N;
    memset(answer, -1, sizeof(answer));
    for (int i=1; i<N; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(i);
        adj[b].push_back(i);
    }
    for (int i=0; i<N; i++) {
        if (adj[i].size() > 2) {
            answer[adj[i][0]] = 0;
            answer[adj[i][1]] = 1;
            answer[adj[i][2]] = 2;
            at = 3;
            break;
        }
    }
    for (int i=1; i<N; i++) {
        if (answer[i] == -1) {
            answer[i] = at;
            at++;
        }
    }
    for (int i=1; i<N; i++) {
        cout << answer[i]<<endl;
    }
}
