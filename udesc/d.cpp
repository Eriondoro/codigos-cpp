#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, pair<int, int>> pii;

const long long INF = LLONG_MAX;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

long long solve(vector<vector<long long>>& grid, int sx, int sy, int ex, int ey) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<long long>> dist(n, vector<long long>(m, INF));
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[sx][sy] = grid[sx][sy];
    pq.push({dist[sx][sy], {sx, sy}});

    while (!pq.empty()) {
        auto [cost, pos] = pq.top(); pq.pop();
        int x = pos.first, y = pos.second;

        if (x == ex && y == ey)
            return cost;

        if (cost > dist[x][y])
            continue;

        for (int dir = 0; dir < 4; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                long long new_cost = cost | grid[nx][ny];

                if (new_cost < dist[nx][ny]) {
                    dist[nx][ny] = new_cost;
                    pq.push({new_cost, {nx, ny}});
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    int x, y;

    cin >> x >> y;
    x--; y--;

    vector<vector<long long>> grid(n, vector<long long>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    long long thomasTime = solve(grid, 0, 0, n - 1, m - 1);
    long long guiTime = solve(grid, x, y, n - 1, m - 1);

    cout << thomasTime << " " << guiTime << endl;

    return 0;
}