#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<string> palavras(n);
    char buffer[100005];
    for (int i = 0; i < n; ++i) {
        scanf("%s", buffer);
        palavras[i] = buffer;
    }

    vector<vector<int>> g(26);
    vector<int> indeg(26, 0);
    set<pair<int, int>> edges;
    vector<bool> usado(26, false);

    for (auto& s : palavras)
        for (char c : s)
            usado[c - 'a'] = true;

    bool invalido = false;
    for (int i = 1; i < n; ++i) {
        string& a = palavras[i - 1];
        string& b = palavras[i];
        int len = min(a.size(), b.size());
        bool achou = false;
        for (int j = 0; j < len; ++j) {
            if (a[j] != b[j]) {
                int u = a[j] - 'a';
                int v = b[j] - 'a';
                if (!edges.count({u, v})) {
                    g[u].push_back(v);
                    indeg[v]++;
                    edges.insert({u, v});
                }
                achou = true;
                break;
            }
        }
        if (!achou && a.size() > b.size()) {
            invalido = true;
            break;
        }
    }

    if (invalido) {
        printf("NAO\n");
        return 0;
    }

    queue<int> q;
    for (int i = 0; i < 26; ++i)
        if (indeg[i] == 0)
            q.push(i);

    string ordem;
    vector<bool> visitado(26, false);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ordem += 'a' + u;
        visitado[u] = true;
        for (int v : g[u]) {
            indeg[v]--;
            if (indeg[v] == 0)
                q.push(v);
        }
    }

    for (int i = 0; i < 26; ++i)
        if (!visitado[i] && usado[i]) {
            printf("NAO\n");
            return 0;
        }

    for (int i = 0; i < 26; ++i)
        if (!visitado[i])
            ordem += 'a' + i;

    printf("SIM\n");
    printf("%s\n", ordem.c_str());
    return 0;
}