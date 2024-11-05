#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int n_array[n];

    for(int x = 0; x < n; x++) {
        cin >> n_array[x];
    }

    for(int x = 1; x < n; x++) {
        n_array[x] = n_array[x - 1] + n_array[x];
    }

    for(int x = 0; x < m; x++) {
        int i, j;
        cin >> i >> j;

        if(i == 1) cout << n_array[j - 1] << '\n';
        else cout << n_array[j - 1] - n_array[i - 2] << '\n';
    }
}