#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        int jValue;
        int max = 0;
        for (int i = 1; i<=n; i++) {
            int aux;
            cin >> aux;
            if (aux > max)
                max = aux;
            if (i == j)
                jValue = aux;
        }

        if (k != 1) {
            cout << "Yes" << endl;
            continue;
        }

        if (jValue == max) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}