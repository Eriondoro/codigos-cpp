#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 5e5 + 10;

vector<vector<int>> adj(MAX);
ll a[MAX];
ll dp[MAX];

void dfs(int u) {
    dp[u] = a[u];
    for (int v : adj[u]) {
        dfs(v);
        if (dp[v] > 0)
            dp[u] += dp[v];
    }
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
        scanf("%lld", &a[i]);

    vector<int> s(N + 1);
    for (int i = 2; i <= N; ++i) {
        scanf("%d", &s[i]);
        adj[s[i]].push_back(i);
    }

    vector<bool> is_child(N + 1, false);
    for (int i = 2; i <= N; ++i)
        is_child[i] = true;

    int root = -1;
    for (int i = 1; i <= N; ++i)
        if (!is_child[i]) {
            root = i;
            break;
        }

    dfs(root);

    printf("%lld\n", max(0LL, dp[root]));

    return 0;
}