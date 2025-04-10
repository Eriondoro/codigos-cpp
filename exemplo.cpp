#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<pair<int, int>, int>> aluno;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int s, f;

        scanf("%d %d", &s, &f);

        aluno.push_back(make_pair(make_pair(-s, f), i));
    }

    sort(aluno.begin(), aluno.end());

    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", aluno[i].second, -aluno[i].first.first, aluno[i].first.second);
    }

    printf("\n");

    return 0;
}