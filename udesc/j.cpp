#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    string v;

    cin >> v;

    int wall = 0;

    for (int t = 0; t < K; t++) {
        if (wall + 1 >= N) break;

        if (v[wall + 1] == '.') {
            swap(v[wall], v[wall + 1]);

            wall++;
        } else if (v[wall + 1] == 'o') {
            int j = wall + 1;

            while (j + 1 < N && v[j + 1] == 'o') j++;

            if (j + 1 < N && v[j + 1] == '.') {
                for (int k = j + 1; k > wall + 1; k--) {
                    v[k] = v[k - 1];
                }

                v[wall + 1] = '#';
                v[wall] = '.';

                wall++;
            }
        }
    }

    cout << v << endl;

    return 0;
}